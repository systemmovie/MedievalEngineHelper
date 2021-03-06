#ifndef FILEENTRY_H
#define FILEENTRY_H
#include <ctime>
#include <cstdio>
#include <cstdint>


// TODO: On Mac see if the size of FILENAME_MAX is 260

namespace ME {

typedef char MEByte;

typedef std::int32_t MEInt32;
typedef std::uint32_t MEUInt32;

typedef std::int64_t MEInt64;
typedef std::uint64_t MEUInt64;

const MEInt32 ME_MAX_FILE_NAME = 255;

/**
 * @brief The FileEntry struct
 */
struct FileEntry {
    char name[300];  // The name of the file
    char fileLocation[ME_MAX_FILE_NAME];  // The real location of the file (memory or disk path)
    MEInt64 size;    // The size of the file
    MEInt64 offset;  // Where in the final file the data is
};

/**
 * @brief The FileHeader struct
 */
struct FileHeader {
    char version[6];       // Version of the dat file
    char name[300];        // Name of the dat file
    char description[512]; // The description of the dat file
    MEInt32 filesNumber;   // The number of files
    MEInt64 createOn;      // When the file was created (time_t)
};





#ifndef nullptr
#define nullptr NULL
#endif

}
#endif // FILEENTRY_H
