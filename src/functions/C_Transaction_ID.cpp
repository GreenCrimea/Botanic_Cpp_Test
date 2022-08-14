/*
C_Transaction_ID Function Definitions
*/
#include "C_Transaction_ID.h"
#include <string_view>
#include <string>
using namespace std;


Transaction_ID::Transaction_ID(string_view transaction_ID){
    this->transaction_ID = transaction_ID;
}

//getter
string Transaction_ID::get_transaction_ID(){
    return transaction_ID;
}