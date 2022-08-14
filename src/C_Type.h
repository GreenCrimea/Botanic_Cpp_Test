/*
C_Type Class

***
Defines the type of a contract.
!!!ONLY TRANSACTIONS TIL SMARTCONTRACTS!!!

Value cannot be changed once object is defined.

Inherited by Contracts.
*/
#include <string_view>
#include <string>
using namespace std;

class Type{

    public:
        //constructor
        Type();
        Type(string_view transaction_ID);

        //destructor
        ~Type();

        //getter
        string get_type();

    private:

        //value
        string type{"TRANSACTION"};
};