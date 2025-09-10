#include "exception.hpp"
#include "maro.hpp"
#include <iostream>

int main(){
    Marshmallow maro = Marshmallow();
    try{
        maro.send_fuking_mallow();
        }
    catch(const Error& e){
        std::cerr <<  "execution faild" << e.what() << std::endl;

        return -1;
    }

    return 0;
}