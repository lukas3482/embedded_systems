#include "mystringutils.h"
#include <inttypes.h>
#include <stdio.h>

int main(){
    char test[] = "Hallo";
    uint32_t lenght = mystringlen(test);
    printf("Lenght: %d\n", lenght);
}