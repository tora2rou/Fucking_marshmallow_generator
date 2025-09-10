#include "maro.hpp"
#include "random_def.hpp"
#include <iostream>
#include <string>
#include <vector>


//グローバル変数を宣言
int gen_times,set_order,alpha_order = 0;
std::vector<char> alphabet_vowel = {'a','b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z'};
std::vector<char> alphabet_constant = {'a','e','i','o','u'};


//アドレス名を生成
std::string Marshmallow::gen_addres_name(){
    //クラスの使用を宣言
    Random rnd =  Random();
    Marshmallow maro = Marshmallow();
    
    //使用する変数を宣言
    addres_name = "";

    //アドレス名の生成に使用する変数の内容を決定
    addres_length = rnd.randint(5,10);
    gen_times = (addres_length + 1)/2;

    //アドレス名を生成
    for(int i = 0; i < gen_times; i++){
        int set_order = rnd.randint(0,1);
        if(set_order == 0){
            addres_name.push_back('0' + rnd.randint(0,9));
            addres_name.push_back('0' + rnd.randint(0,9));
        }
        else{
            alpha_order = rnd.randint(0,1);
                if(alpha_order == 0) {
                    addres_name.push_back(rnd.choice(alphabet_constant));
                    addres_name.push_back(rnd.choice(alphabet_vowel));
                }
                if(alpha_order == 1){
                    addres_name.push_back(rnd.choice(alphabet_vowel));
                    addres_name.push_back(rnd.choice(alphabet_constant));
                }
        }
    }

    //アドレス名を返す
    return addres_name;
}

//ドメイン名を生成
std::string Marshmallow::gen_domain(){
    //クラスの使用を宣言
    Random rnd =  Random();
    Marshmallow maro = Marshmallow();

    //使用する変数を宣言
    domain = "";


    //ドメイン名を作成
    gen_times = rnd.randint(3,5);
    for(int i = 0; i <= gen_times;i++){
        set_order = rnd.randint(0,1);
        if(set_order == 0) domain.push_back(rnd.choice(alphabet_constant));
        else domain.push_back(rnd.choice(alphabet_vowel));
    }

    //ドメイン名を返す
    return domain;
}

std::string Marshmallow::connect_addres(){
    Marshmallow maro = Marshmallow();

    //メールアドレスを連結
    mail_addres = maro.gen_addres_name() + "@" + maro.gen_domain() + ".com";

    //メアドを返す
    return mail_addres;
    
}


//ユーザー名を生成
std::string Marshmallow::gen_user_name(){
    //クラスの使用を宣言
    Random rnd =  Random();
    Marshmallow maro = Marshmallow();

    int user_name_length;

    //ユーザー名の生成に使用する変数の内容を決定
    user_name_length = rnd.randint(2,5);

    //アドレス名を生成
    for(int i = 0; i <= user_name_length; i++){
            alpha_order = rnd.randint(0,1);
                if(alpha_order == 0) {
                    user_name.push_back(rnd.choice(alphabet_constant));
                    user_name.push_back(rnd.choice(alphabet_vowel));
                }
                if(alpha_order == 1){
                    user_name.push_back(rnd.choice(alphabet_vowel));
                    user_name.push_back(rnd.choice(alphabet_constant));
                }
        }


    //ユーザー名を返す
    return user_name;
}


//クソマロを生成
std::string Marshmallow::gen_fucking_mallow(){
    fucking_mallow = "道半ばで息絶えたこんにゃく芋";

    //クソマロ本体の生成

    //クソマロ返す
    return fucking_mallow;
}

void Marshmallow::send_fuking_mallow(){
    Marshmallow maro = Marshmallow();

    std::cout << "Mail_Addres:" << maro.connect_addres() << std::endl;
    std::cout << "User_Name:" << maro.gen_user_name() << std::endl;
    std::cout << "Fuking_Mallow:" << maro.gen_fucking_mallow() << std::endl;
}