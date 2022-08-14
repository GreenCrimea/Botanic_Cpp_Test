/*
C_Sender_Signature Function Definitions
*/
#include "C_Sender_Signature.h"
#include <string_view>
#include <string>
using namespace std;


//constructor
Sender_Signature::Sender_Signature() = default;

Sender_Signature::Sender_Signature(string_view signature){
    this->signature = signature;
}

//getter
string Sender_Signature::get_sender_signature(){
    return signature;
}