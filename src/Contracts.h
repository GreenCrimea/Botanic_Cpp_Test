/*
Contracts Class

***
Defines a single contract.

Value cannot be changed once object is defined.

Inherited by Block.

Inherits Type, Transaction_ID, Reciever_Wallet, Sender_Wallet,
Sender_Signature, Data, Reward
*/
#include <string_view>
#include <string>
//#include "C_Type.h"
//#include "C_Transaction_ID.h"
//#include "C_Reciever_Wallet.h"
//#include "C_Sender_Wallet.h"
//#include "C_Sender_Signature.h"     
//#include "C_Data.h"          
//#include "C_Reward.h"
#include "C_Type.cpp"
#include "C_Transaction_ID.cpp"
#include "C_Reciever_Wallet.cpp"
#include "C_Sender_Wallet.cpp"
#include "C_Sender_Signature.cpp"    
#include "C_Data.cpp"          
#include "C_Reward.cpp"
using namespace std;

class Contracts :   public Type, 
                    public Transaction_ID,
                    public Reciever_Wallet,
                    public Sender_Wallet,
                    public Sender_Signature,
                    public Data,
                    public Reward
                    {

    public:
        //constructors
        Contracts()=default;
        Contracts(  string_view type,
                    string_view transaction_ID,
                    string_view reciever_wallet,
                    string_view sender_wallet,
                    string_view sender_signature,
                    double data,
                    double reward):
            Type(type),
            Transaction_ID(transaction_ID),
            Reciever_Wallet(reciever_wallet),
            Sender_Wallet(sender_wallet),
            Sender_Signature(sender_signature),
            Data(data),
            Reward(reward){}

        //destructor
        ~Contracts();

        //printer
        void print_contract();
};