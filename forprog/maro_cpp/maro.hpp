#pragma once

#include <iostream>
#include <random>
#include <string>
#include <vector>


class Marshmallow{
	private : 
    std::string user_name,addres_name,domain,mail_addres,reason,fucking_mallow;
	int addres_length,name_length;
    
    public:
    std::string gen_addres_name();
    std::string gen_domain();
    std::string connect_addres();
    std::string gen_user_name();
    std::string gen_reason();
    std::string gen_fucking_mallow();
    void send_fuking_mallow();

};