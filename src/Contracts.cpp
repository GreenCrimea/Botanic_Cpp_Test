/*
Contracts Function Definitions
*/
#include <iostream>
#include <string_view>
#include <string>
#include "Contracts.h"
using namespace std;


Data::Data(double data_value){
    this->data_value = data_value;
}

//getter
double Data::get_data_value(){
    return data_value;
}



Reciever_Wallet::Reciever_Wallet(string_view wallet){
    this->wallet = wallet;
}

//getter
string Reciever_Wallet::get_reciever_wallet(){
    return wallet;
}



Reward::Reward(double reward_value){
    this->reward_value = reward_value;
}

//getter
double Reward::get_reward_value(){
    return reward_value;
}



Sender_Signature::Sender_Signature(string_view signature){
    this->signature = signature;
}

//getter
string Sender_Signature::get_sender_signature(){
    return signature;
}



Sender_Wallet::Sender_Wallet(string_view wallet){
    this->wallet = wallet;
}

//getter
string Sender_Wallet::get_sender_wallet(){
    return wallet;
}



Transaction_ID::Transaction_ID(string_view transaction_ID){
    this->transaction_ID = transaction_ID;
}

//getter
string Transaction_ID::get_transaction_ID(){
    return transaction_ID;
}



Type::Type(string_view type){
    this->type = type;
}

//getter
string Type::get_type(){
    return type;
}



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