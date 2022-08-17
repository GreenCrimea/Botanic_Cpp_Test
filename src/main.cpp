#include <iostream>
#include <string>
#include "block.h"
using namespace std;


Contracts test_1();

Contracts test_2();

void test_3(Contracts a, Contracts b);


int main() {

    Contracts contract_1 = test_1();
    Contracts contract_2 = test_2();

    test_3(contract_1, contract_2);

    return 0;
} 

Contracts test_1(){

    string transaction_ID{"87f897f987e7"};
    string reciever_wallet{"689fe6a897f"};
    string sender_wallet{"a75ba789c"};
    string sender_signature{"ab7894576532cbe9f"};
    double data{100};
    double reward{10};

    Contracts contract_1(   transaction_ID, reciever_wallet, 
                            sender_wallet, sender_signature, data, 
                            reward);

    contract_1.print_contract();

    return contract_1; 
}

Contracts test_2(){

    string transaction_ID{"87f897f987e7"};
    string reciever_wallet{"689fe6a897f"};
    string sender_wallet{"a75ba789c"};
    string sender_signature{"ab7894576532cbe9f"};
    double data{500};
    double reward{50};

    Contracts contract_1(   transaction_ID, reciever_wallet, 
                            sender_wallet, sender_signature, data, 
                            reward);

    contract_1.print_contract();

    return contract_1; 
}

void test_3(Contracts a, Contracts b){

    double index {1};
    string timestamp {"1/1/1970"};
    string proof {"786978b7abfe9687f"};
    string previous_proof {"698a9869b869876f767e"};

    Block block_1(index, timestamp, proof, previous_proof);

    block_1.initialise_array(1,a);
    block_1.initialise_array(2,b);

    block_1.print_block();
}