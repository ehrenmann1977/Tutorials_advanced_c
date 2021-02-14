#include <stdio.h>

// start by creating a struct for the bits
typedef struct  {

    unsigned int bit0:1; //this is LSB
    unsigned int bit1:1; //bit 1
    unsigned int bit2:1;
    unsigned int bit3:1;
    unsigned int bit4:1;
    unsigned int bit5:1;
    unsigned int bit6:1;
    unsigned int bit7:1;
    unsigned int bit8:1;
}charbits;


int main()
{
    // now assume we have a char to be converted into its bits
    char a = 'a'; //asci of a is 97
    charbits *x;   //this is the character bits to be converted to
    // first convert the char a to void pointer
    void* p; //this is a void pointer
    p=&a;    // put the address of a into p
    //now convert the void pointer to the struct pointer
    x=(charbits *) p;

    // now print the contents of the struct
    printf("b0 %d b1 %d b2 %d b3 %d b4 %d b5 %d b6 %d b7 %d b8 %d", x->bit0,x->bit1, x->bit2,x->bit3, x->bit4, x->bit5, x->bit6, x->bit7, x->bit8);

    // 97 has bits like this 01100001
    //b0 1 b1 0 b2 0 b3 0 b4 0 b5 1 b6 1 b7 0 b8 0
    // now we see that bit 0 is the LSB which is the first one in the struct

    // thank you and i hope this helps

    return 0;
}
