# 1stNUP.xml

Stores what is displayed on the Wara Wara Plaza

<b>Mii structure:</b>  
Mii's are stored as base64 encoded bytes using the following structure:

| Size (in bits!) | Description         |
| --------------- | ------------------- |
| 4 | birth_platform    |
| 4 | unk_0x00_b4       |
| 4 | unk_0x01_b0       |
| 4 | unk_0x01_b4       |
| 4 | font_region       |
| 2 | region_move       |
| 1 | unk_0x02_b6       |
| 1 | copyable          |
| 8 | mii_version      |
| 64 | author_id        |
| 4 | createIdFlags     |
| 28 | timestamp        |
| 48 | deviceHash       |
| 16 | unk_0x16         |  
| 1 | unk_0x18_b0       | 
| 1 | unk_0x18_b1       | 
| 4 | color             | 
| 5 | birth_day         | 
| 4 | birth_month       | 
| 1 | gender            | 
| 160 | mii_name         |  
| 8 | size              |
| 8 | fatness           |
| 4 | blush_type        |
| 4 | face_style        |
| 3 | face_color        |
| 4 | face_type         |
| 1 | local_only        |
| 5 | hair_mirrored     |
| 3 | hair_color        |
| 8 | hair_type         |
| 3 | eye_thickness     |
| 4 | eye_scale         |
| 3 | eye_color         |
| 6 | eye_type          |
| 7 | eye_height        |
| 4 | eye_distance      |
| 5 | eye_rotation      |
| 4 | eyebrow_thickness |
| 4 | eyebrow_scale     |
| 3 | eyebrow_color     |
| 5 | eyebrow_type      |
| 7 | eyebrow_height    |
| 4 | eyebrow_distance  |
| 5 | eyebrow_rotation  |
| 7 | nose_height       |
| 4 | nose_scale        |
| 5 | nose_type         |
| 3 | mouth_thickness   |
| 4 | mouth_scale       |
| 3 | mouth_color       |
| 6 | mouth_type        |
| 8 | unk_0x40          |
| 3 | mustache_type     |
| 5 | mouth_height      |
| 6 | mustache_height   |
| 4 | mustache_scale    |
| 3 | beard_color       |
| 3 | beard_type        |
| 5 | glass_height      |
| 4 | glass_scale       |
| 3 | glass_color       |
| 4 | glass_type        |
| 1 | unk_0x46_b0       |
| 5 | mole_ypos         |
| 5 | mole_xpos         |
| 4 | mole_scale        |
| 1 | mole_enabled      |
| 160 | creator_name     |
| 16 | unk_0x5C         |
| 16 | checksum         |

Total size: 96 bytes  
The checksum can be calculated using this: https://garyhax.tech/docs/assets/files/plaza_fixer.c  

<b>CreateIdFlags:</b>

| Flag | Description    |
| -----| ---------------|
| 0002 | FLAG_TEMPORARY |
| 0005 | FLAG_WII_U     |
| 0008 | FLAG_NORMAL    |

<i>Credits to decaf-emu for parts of the entry structure: https://github.com/decaf-emu/decaf-emu/blob/master/src/libdecaf/src/nn/ffl/nn_ffl_miidata.h</i>
<br><br>
<i>Created: 2020-07-24 by GaryOderNichts, Last edited: never</i>