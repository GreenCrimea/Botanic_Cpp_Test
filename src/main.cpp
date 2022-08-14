#include <iostream>
#include <string>
#include "Contracts.h"
using namespace std;

int main() {

    string type{"TRANSACTION"};
    string transaction_ID{"87f897f987e7"};
    string reciever_wallet{"689fe6a897f"};
    string sender_wallet{"a75ba789c"};
    string sender_signature{"ab7894576532cbe9f"};
    double data{100};
    double reward{10};

    Contracts contract_1(   type, transaction_ID, reciever_wallet, 
                            sender_wallet, sender_signature, data, 
                            reward);

    contract_1.print_contract();

    return 0; 
}