/*
C_Reciever_Wallet Class

***
Defines the wallet address of the reciever of a contract.

Value cannot be changed once object is defined.

Inherited by Contracts.
*/
#include <string_view>
#include <string>
using namespace std;

class Reciever_Wallet{

    public:
        //constructor
        Reciever_Wallet()=default;
        Reciever_Wallet(string_view wallet);

        //destructor
        ~Reciever_Wallet();

        //getter
        string get_reciever_wallet();

    private:

        //value
        string wallet{"null"};
};