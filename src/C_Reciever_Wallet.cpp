/*
C_Reciever_Wallet Function Definitions
*/
#include "C_Reciever_Wallet.h"
#include <string_view>
#include <string>
using namespace std;


//constructor
Reciever_Wallet::Reciever_Wallet() = default;

Reciever_Wallet::Reciever_Wallet(string_view wallet){
    this->wallet = wallet;
}

//getter
string Reciever_Wallet::get_reciever_wallet(){
    return wallet;
}