/**
 * Extracts TGA icons from a BaristaIconDataBase.dat
 * Created 2020 by GaryOderNichts
 */

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

#ifndef _WIN32
    #include <byteswap.h>
#endif

#define START_PADDING 7204

typedef struct
{
    uint64_t title_id;
    uint8_t unknown1[8232];
    uint8_t icon[65580];
    uint8_t padding[4];
} DatabaseEntry;

int main(int argc, char** argv)
{
    if (argc != 2)
    {
        printf("IconDataBaseExtractor by GaryOderNichts\n\n");
        printf("Usage:\n");
        printf("    databaseextractor [database]\n");
        return 0;
    }

    FILE* f = fopen(argv[1], "rb");
    if (!f)
    {
        printf("Error opening %s\n", argv[1]);
        return 0;
    }

    fseek(f, 0, SEEK_END);
    size_t size = ftell(f);
    rewind(f);

    if (size == 0)
    {
        printf("Error empty database\n");
        return 0;
    }

    uint32_t entries_amount = (size - START_PADDING) / sizeof(DatabaseEntry);
    DatabaseEntry* entries = calloc(1, entries_amount * sizeof(DatabaseEntry));

    fseek(f, START_PADDING, SEEK_SET);
    fread(entries, 1, size - START_PADDING, f);
    fclose(f);

    for (int i = 0; i < entries_amount; i++)
    {
        DatabaseEntry entry = entries[i];

#ifdef _WIN32
        entry.title_id = _byteswap_uint64(entry.title_id);
#else
        entry.title_id = bswap_64(entry.title_id);
#endif

        char* filename = malloc(128);
        snprintf(filename, 128, "%016lX.tga", entry.title_id);

        FILE* out = fopen(filename, "wb");
        if (out)
        {
            fwrite(entry.icon, 1, 65580, out);
            fclose(out);
        }

        printf("Written %s\n", filename);
        free(filename);
    }

    free(entries);

    return 0;
}