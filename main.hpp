#ifndef MAIN_H
#define MAIN_H

enum Pass { FIRST , SECOND };

enum Format { Format1,Format2,Format3,Format4,Format5 };

typedef unsigned long ObjectCode;

#define sizeOfByte 8

#define sizeOfObjectCode sizeOfByte*sizeof(ObjectCode)

#define      Op_pos 3
#define Address_pos 0
#define    Dest_pos 2
#define SourceS_pos 1
#define SourceT_pos 0

#endif
