#include "bin.h"

char* bin(char x)
{
    static char result[] = "0b00000000";
    for(int i=0; i<8; ++i)
        result[i+2] = x & (1 << (7-i)) ? '1' : '0';
    return result;
}
