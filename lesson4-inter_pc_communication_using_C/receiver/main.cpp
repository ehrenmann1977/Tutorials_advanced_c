#include <QByteArray>
#include <QDebug>


#include "nmpack_interface.h"








int main(int argc, char *argv[])
{

    std::string Url = "tcp://127.0.0.1:5000";
    const char* url=Url.c_str();

    int sock=nm_init_socket(url, true); //true => Auxiliary node

     for (;;) {

         //unpack msgpack objects
         msgpack_object depacked;
         DataPatern dp; //final data
         dp = nm_recv(sock, depacked);

         puts("");


        //std::cout << deserialized << std::endl;

         sleep(1);

     }




}
