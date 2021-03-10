#include <stdio.h>
#include <string.h>
#include "libusb.h"


int main(int argc, char *argv[])
{
    libusb_context *ctx;
    libusb_init( &ctx );
    libusb_exit(NULL);
    return 0;
}
