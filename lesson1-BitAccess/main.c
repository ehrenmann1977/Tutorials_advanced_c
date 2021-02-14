#include <stdio.h>

typedef struct {
    unsigned int bit0:1; //least significant bit
    unsigned int bit1:1;
    unsigned int bit2:1;
    unsigned int bit3:1;
    unsigned int bit4:1;
    unsigned int bit5:1;
    unsigned int bit6:1;
    unsigned int bit7:1; //MSB
} Byte;

void* vp;

typedef struct{
    Byte by1;
    Byte by2;
    Byte by3;
    Byte by4;
} bytes4;


int main()
{
    unsigned char x='a'; //asc a = 97 => 01100001
    vp = &x;
    //convert void pointer to struct pointer
    Byte* b;
    b=vp;

    printf("b0%d b1%d b2%d b3%d b4%d b5%d b6%d b7%d\n",b->bit0, b->bit1, b->bit2, b->bit3, b->bit4, b->bit5, b->bit6, b->bit7);


    // fill the 4 bytes
    int p = 32; //00000000 00000000 00000000 00100000
    vp = &p;
    bytes4* b4;
    b4=vp;
    printf("bit 5 = %d \n", b4->by1.bit5);

    // C11

    return 0;
}
