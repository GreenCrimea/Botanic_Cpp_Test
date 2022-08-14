/*
C_Sender_Signature Class

***
Defines the signature of the sender of a contract.

Value cannot be changed once object is defined.

Inherited by Contracts.
*/
#include <string_view>
#include <string>
using namespace std;

class Sender_Signature{

    public:
        //constructor
        Sender_Signature();
        Sender_Signature(string_view signature);

        //destructor
        ~Sender_Signature();

        //getter
        string get_sender_signature();

    private:

        //value
        string signature{"null"};
};