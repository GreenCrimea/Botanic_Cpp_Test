/*
C_Sender_Wallet Class

***
Defines the wallet address of the sender of a contract.

Value cannot be changed once object is defined.

Inherited by Contracts.
*/
#include <string_view>
#include <string>
using namespace std;

class Sender_Wallet{

    public:
        //constructor
        Sender_Wallet()=default;
        Sender_Wallet(string_view wallet);

        //destructor
        ~Sender_Wallet();

        //getter
        string get_sender_wallet();

    private:

        //value
        string wallet{"null"};
};