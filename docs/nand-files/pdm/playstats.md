# PlayStats.dat
Full path: `/storage_mlc/usr/save/system/pdm/USERID/PlayStats.dat`

Stores overall play data about titles.
<br>

<h2>Library</h2>

Using the `nn_pdm.rpl` library the following functions can be used to interact with the file:  
* `uint32_t GetPlayStatsMaxLength(uint32_t* outMaxLength)`
* `uint32_t GetPlayStatsLength(uint32_t* outLength, uint32_t userId)`
* `uint32_t GetPlayStatsOfTitleId(PlayStats* outPlayStats, uint32_t userId, uint64_t titleId)`
* `uint32_t GetPlayStats(uint32_t* outAmount, PlayStats* outPlayStats, uint32_t userId, uint32_t amount)`
* `uint32_t GetPlayStats(PlayStats* outPlayStats, uint32_t userId, uint32_t amount)`

<i>More info about the functions: https://github.com/devkitPro/wut/blob/master/include/nn/pdm/pdm_cpp.h</i>

<h2>File Structure</h2>

| Size (in bytes)     | Description       |
| ------------------- | ----------------- |
| 4                   | Amount of Entries |
| num * sizeof(entry) | Entries           |  

<b>Entry structure:</b>

| Size (in bytes) | Description                  |
| --------------- | ---------------------------- |
| 8               | Title ID                     |
| 4               | Total Time Played in Minutes |
| 2               | No. Times Played             |
| 2               | First time played            |
| 2               | Last time played             |
| 2               | Unknown (always 0000)        |   

The `First time played` and `Last time played` is specified as the amount of days since January 1st, 2000.
<b>Notes:</b>

* Filled with 0s for 256 entries.

<i>Created: 2020-07-01 by GaryOderNichts, Last edited: 2020-07-01 by NoahAbc12345</i>
