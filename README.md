# ForestDB

ForestDB is a key-value storage engine that is developed by Couchbase Caching and Storage Team, and its main index structure is built from Hierarchical B+-Tree based Trie, called HB+-Trie. [HB+-Trie](http://db.csail.mit.edu/sigmod11contest/sigmod_2011_contest_poster_jungsang_ahn.pdf) was presented at ACM SIGMOD 2011 Programming Contest, by [Jung-Sang Ahn](http://cagsky.kaist.ac.kr/jsahn/) who now works at Couchbase Caching and Storage Team.

Compared with traditional B+-Tree based storage engines, ForestDB shows significantly better read and write performance with less storage overhead. ForestDB has been tested on various server OS enviroments (Centos, Ubuntu, Mac OS x, Windows) and mobile OSs (iOS, Android).

Please refer to the [ForestDB wiki](https://github.com/couchbaselabs/forestdb/wiki) for more details.

## Main Features

- Keys and values are treated as an arbitrary binary.
- Applications can supply a custom compare function to support a customized key order.
- A value can be retrieved by its sequence number or disk offset in addition to a key.
- Write-Ahead Logging (WAL) and its in-memory index are used to reduce the main index lookup / update overhead.
- Multiple snapshot instances can be created from a given ForestDB instance to provide different views of database.
- Rollback is supported to revert the database to a specific point.
- Ranged iteration by keys or sequence numbers is supported for a partial or full range lookup operation.
- Manual or auto compaction can be configured per ForestDB database file.
- Transactional support with read\_committed or read\_uncommitted isolation level.

## Build

On non-Windows platforms, there is a dependency on Snappy library because ForestDB supports an option to compress a document body using Snappy.
Please visit [Snappy site](https://code.google.com/p/snappy/) to download and install the library.

On Mac OS X, Snappy can be simply installed using Homebrew package manager:

`sudo brew install snappy`

After installing the Snappy library, please follow the instructions below:

1) `git clone forestdb_repo_url`

2) `cd forestdb`

3) `mkdir build`

4) `cd build`

5) `cmake ../`

6) `make all`

## Test

make test

## How to Use

Please refer to tests/fdb\_functional\_test.cc in ForestDB source directory.
