#include <stdio.h>
const int i=1;
#define isBigEndian()((*(short *)&i)==0)


short reverseShort (short s) {
    unsigned char c1, c2;

    if (isBigEndian()) {
        return s;
    } else {
        c1 = s & 0xFF;
        printf("Char 1 = %X \n",c1);
        c2 = (s >> 8) & 0xFF;
        printf("Char 2 = %X \n",c2);

        return (c1 << 8) + c2;
    }
}

void PrintInt()
{
    int i=0x01020304;
    unsigned char *p = (unsigned char *) &i;
    printf("first Byte = %X \n", *(p));

    unsigned char x[2]={1,0};
    //short y = (*)(short*) x;
    //printf("y = %X", y);



}

int main()
{

    //now check what type of endianness is it on this processor
    if (isBigEndian())
    {
        printf("Big Endian \n");
        PrintInt();
    } else {
        printf("little Endian \n");
        PrintInt();

        //do the conversion from short

        short s=0x0A0B;
        s=reverseShort(s);
        printf("output = %X \n",s);
    }



    // do the conversion with characters that are in a struct to show the difference
    // on Big endian system it will be 0x0100=256  while on little endian system it will be 0x0001=1
    unsigned char endian[2] = {1,0};
    short *xw = endian;
    printf(" xw = %X ", *xw );

    short t=reverseShort(*xw);
    printf("output = %X \n",t);

    return 0;
}

