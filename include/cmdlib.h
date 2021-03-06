#ifndef __CMDLIB__
#define __CMDLIB__

#include <ctype.h>
#include <fcntl.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/io.h>
#include <sys/stat.h>

#ifndef __BYTEBOOL__
#define __BYTEBOOL__
typedef enum { false, true } boolean;
typedef unsigned char byte;
#endif

#define PATHSEPERATOR '/'

int filelength(int handle);
int tell(int handle);

void Error(char *error, ...);
int	CheckParm(char *check, int argc, char *argv[]);
int SafeOpenRead(char *filename);
int	SafeOpenWrite (char *filename);
void SafeRead(int handle, void *buffer, long count);
void SafeWrite(int handle, void *buffer, long count);
void *SafeMalloc(long size);
long LoadFile(char *filename, void **bufferptr);
void SaveFile(char *filename, void *buffer, long count);
void DefaultExtension(char *path, char *extension);
void StripFilename(char *path);
void StripExtension(char *path);
#endif
