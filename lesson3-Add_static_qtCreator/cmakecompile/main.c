#include <stdio.h>
#include <string.h>
#include "libusb.h"

//note: to write see this
//https://stackoverflow.com/questions/14772152/read-write-on-a-pen-drive-using-libusb-libusb-bulk-transfer


int main(int argc, char *argv[])
{
    libusb_context *ctx;
    libusb_init( &ctx );
    libusb_exit(NULL);
    return 0;
}
