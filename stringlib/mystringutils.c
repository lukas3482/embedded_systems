#include "mystringutils.h"
#include <inttypes.h>

uint32_t mystringlen(char* str){
    uint32_t lenght = 0;
    while(str[lenght] != '\0'){
        lenght++;
    }
    return lenght;
}