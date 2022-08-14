/*
C_Sender_Wallet Function Definitions
*/
#include "C_Sender_Wallet.h"
#include <string_view>
#include <string>
using namespace std;


Sender_Wallet::Sender_Wallet(string_view wallet){
    this->wallet = wallet;
}

//getter
string Sender_Wallet::get_sender_wallet(){
    return wallet;
}