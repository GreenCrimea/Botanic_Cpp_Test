/*
C_Transaction_ID Class

***
Defines the transaction ID of a contract.

Value cannot be changed once object is defined.

Inherited by Contracts.
*/
#include <string_view>
#include <string>
using namespace std;

class Transaction_ID{

    public:
        //constructor
        Transaction_ID()=default;
        Transaction_ID(string_view transaction_ID);

        //destructor
        ~Transaction_ID();

        //getter
        string get_transaction_ID();

    private:

        //value
        string transaction_ID{"null"};
};