# PlayDiary.dat
Full path: `/storage_mlc/usr/save/system/pdm/USERID/PlayDiary.dat`  
Stores playtimes for titles
<br>

<h2>Library</h2>  

Using the `nn_pdm.rpl` library the following functions can be used to interact with the file:  
* `uint32_t GetPlayDiaryMaxLength(uint32_t* outMaxLength)`
* `uint32_t GetPlayDiaryLength(uint32_t* outLength, uint32_t userId)`
* `uint32_t GetPlayDiaryStart(uint32_t* outStart, uint32_t userId)`
* `uint32_t GetPlayDiary(uint32_t* outAmount, PlayDiary* outPlayDiaries, uint32_t userId, uint32_t amount)`
* `uint32_t GetPlayDiary(PlayDiary* outPlayDiaries, uint32_t userId, uint32_t amount)`

<i>More info about the functions: https://github.com/devkitPro/wut/blob/master/include/nn/pdm/pdm_cpp.h</i>

<h2>File Structure</h2>  

| Size (in bytes)     | Description       |
| ------------------- | ----------------- |
| 8                   | Amount of Entries |
| num * sizeof(entry) | Entries           |  

<b>Entry structure:</b>  

| Size (in bytes) | Description         |
| --------------- | ------------------- |
| 8               | Title ID            |
| 4               | Playtime in Minutes |
| 2               | Date                |
| 2               | Flags               |   

The date is specified as days since 2000-01-01

<b>Flags:</b>  

| Flag | Description        |
| ---- | ------------------ |
| 0100 | Played in Wii Mode |
| 0a00 | Unknown            |

<b>Notes:</b>  

* When played in Wii Mode the Titile ID is `ffff ffff ffff ffff` and the Played in Wii Mode flag is set

<i>Created: 2020-06-30 by GaryOderNichts, Last edited: 2020-07-01 by GaryOderNichts</i>