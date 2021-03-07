#include <stdio.h>
#include <string.h>
#include "D:\msys2\mingw64\include\libusb-1.0\libusb.h"


int main(int argc, char *argv[])
{
    libusb_context *ctx;
    libusb_init( &ctx );
    libusb_exit(NULL);
    return 0;
}
