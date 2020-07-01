# BaristaIconDataBase.dat
Full path:
* JPN `storage_mlc/usr/save/00050010/10040000/user/common/BaristaIconDataBase.dat`
* USA `storage_mlc/usr/save/00050010/10040100/user/common/BaristaIconDataBase.dat`
* EUR `storage_mlc/usr/save/00050010/10040200/user/common/BaristaIconDataBase.dat`

Stores icons and metadata for installed titles.  
An entry gets created for every title that has been launched at least once on the system.  

<h2>File Structure</h2>

| Size (in bytes)     | Description       |
| ------------------- | ----------------- |
| 7204                | Unknown           |
| num * sizeof(entry) | Entries           |  

<b>Entry structure:</b>

| Size (in bytes) | Description         |
| --------------- | ------------------- |
| 8               | Title ID            |
| 8232            | Unknown             |
| 65580           | Icon                |
| 4               | Padding             |  

The icons are stored as 128x128px TGA files.  
You can extract them with a simple tool I've written.  
You can find the source of the tool [here](/docs/assets/files/BaristaIconExtractor.c ':ignore').  
<br>
There is also the long and shortname in every language stored in there.

<h2>Additional Notes</h2>
Even though the file is stored inside the Wii U Menu's save data, the icons get used by some other applications too.  
The roulette game of the eShop get the icons from that file for example.

<i>Created: 2020-07-02 by GaryOderNichts, Last edited: never</i>