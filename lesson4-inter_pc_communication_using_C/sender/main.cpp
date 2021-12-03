
#include "../receiver/nmpack_interface.h"


#include <QByteArray>
#include <QDebug>




int main(int argc, char *argv[])
{


    //convert int to hex
    char *hex=static_cast<char *>(malloc(100));
    memset(hex,0,100);
    decToHexa(1,hex);



    std::string Url = "tcp://127.0.0.1:5000";
    const char* url=Url.c_str();
    int sock=nm_init_socket(url,false);


    DataPatern dp;
    dp.element1=2;
    dp.element2=false;
    dp.element3="example";



//    TelegramPatern dp1;
//    dp1.STX=0x02;

//    std::string NA="01";
//    memcpy(&dp1.NA[0],&NA[0],2);

//    std::string Auftrag = "ABCD";
//    memcpy(&dp1.Auftrag[0],&Auftrag[0],4);

//    //convert decimal to hex 00ff
//    std::string dlen = "000F";
//    memcpy(&dp1.Fieldlen[0],&dlen[0],4);
//    //convert hex 000F to decimal

//    std::string datap= "0123456789ABCDEF";
//    dp1.dataptr = (char*)malloc(16);
//    memcpy((void*)dp1.dataptr,datap.c_str(),16);

//    std::string crc="1234";
//    memcpy(&dp1.CRC[0], &crc[0], 4);

//    dp1.ETX = 0x03;




    size_t buflen=0;
    msgpack_sbuffer sbuf = prepare_buffer(dp, buflen);

     for (;;) {
         int r=nm_send(sock,sbuf);
         printf("result of send = %d \n",r);
         sleep(1);

     }

     msgpack_sbuffer_destroy(&sbuf);



}
