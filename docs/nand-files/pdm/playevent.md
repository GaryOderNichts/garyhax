# PlayEvent.dat
Full path: `/storage_mlc/usr/save/system/pdm/USERID/PlayEvent.dat`  
<br>

<h2>Library</h2>  

Using the `nn_pdm.rpl` library the following functions can be used to interact with the file:  
* `uint32_t GetPlayEventMaxLength(uint32_t* outMaxLength)`
* `uint32_t GetPlayEvent(uint32_t* outAmount, PlayEvent* outPlayEvents, uint32_t userId, uint32_t amount)`

<i>More info about the functions: https://github.com/devkitPro/wut/blob/master/include/nn/pdm/pdm_cpp.h</i>

<h2>File Structure</h2>  

| Size (in bytes)     | Description |
| ------------------- | ----------- |
| 8                   | Unknown     |
| num * sizeof(entry) | Entries     |  

<b>Entry structure:</b>  

| Size (in bytes) | Description |
| --------------- | ----------- |
| 8               | Title ID    |
| 12              | Unknown     | 

<b>Notes:</b>  

* Some title IDs are System Title IDs  
* Filled with 0s up to 10248 bytes

<i>Created: 2020-07-01 by GaryOderNichts, Last edited: never</i>