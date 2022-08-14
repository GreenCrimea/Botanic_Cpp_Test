/*
Contracts Function Definitions
*/
#include <iostream>
#include <string_view>
#include <string>
#include "Contracts.h"
#include <string_view>
#include <string>
//#include "C_Type.h"
//#include "C_Transaction_ID.h"
//#include "C_Reciever_Wallet.h"
//#include "C_Sender_Wallet.h"
//#include "C_Sender_Signature.h"    
//#include "C_Data.h"          
//#include "C_Reward.h" 
#include "Contracts.h"
using namespace std;


//printer
void Contracts::print_contract(){
    cout << "CONTRACT" << endl;
    cout << "===============" << endl;
    cout << "type: " << get_type() << endl;
    cout << "transaction ID: " << get_transaction_ID() << endl;
    cout << "reciever wallet: " << get_reciever_wallet() << endl;
    cout << "sender wallet: " << get_sender_wallet() << endl;
    cout << "sender signature: " << get_sender_signature() << endl;
    cout << "data: " << get_data_value() << endl;
    cout << "reward: " << get_reward_value() << endl;
}