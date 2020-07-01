# PlayLog.dat
Full path: `/storage_mlc/usr/save/system/pdm/USERID/PlayLog.dat`  
<br>

<h2>Library</h2>  

Using the `nn_pdm.rpl` library the following functions can be used to interact with the file:  
* `uint32_t GetPlayLogMaxLength(uint32_t* outMaxLength)`
* `uint32_t GetPlayLogLength(uint32_t* outLength, uint32_t userId)`
* `uint32_t GetPlayLogStart(uint32_t* outStart, uint32_t userId)`
* `uint32_t GetPlayLog(uint32_t* outAmount, PlayLog* outPlayLogs, uint32_t userId, uint32_t amount)`
* `uint32_t GetPlayLog(PlayLog* outPlayLogs, uint32_t userId, uint32_t amount)`

<i>More info about the functions: https://github.com/devkitPro/wut/blob/master/include/nn/pdm/pdm_cpp.h</i>

<h2>File Structure</h2>  

| Size (in bytes)     | Description       |
| ------------------- | ----------------- |
| 8                   | Amount of Entries |
| num * sizeof(entry) | Entries           |  

<b>Entry structure:</b>  

| Size (in bytes) | Description |
| --------------- | ----------- |
| 8               | Title ID    |
| 16              | Unknown     |

<b>Notes:</b>  

* Some title IDs are System Title IDs  

<i>Created: 2020-07-01 by GaryOderNichts, Last edited: never</i>