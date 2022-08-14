/*
Contracts Function Definitions
*/
#include <iostream>
#include <string_view>
#include <string>
#include "Contracts.h"
using namespace std;

//constructors
Contracts::Contracts() = default;

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