#include <stdio.h>
#include <inttypes.h>

void swap2(uint32_t** a, uint32_t** b){
    uint32_t* temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    uint32_t a = 10;
    uint32_t b = 20;

    uint32_t* pA = &a;
    uint32_t* pB = &b;

    printf("a: %p\n", &pA);
    printf("b: %p\n", &pB);

    swap2(&pA, &pB);
    printf("------------\n");

    printf("a: %p\n", &pA);
    printf("b: %p\n", &pB);


}