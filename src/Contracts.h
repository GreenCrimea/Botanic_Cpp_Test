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
using namespace std;


class Data {

    public:
        //constructor
        Data()=default;
        Data(double data_value){
            this->data_value = data_value;
        }

        //destructor
        ~Data();

        //getter
        double get_data_value(){
            return data_value;
        }

    private:

        //value
        double data_value{0};
};


class Reciever_Wallet{

    public:
        //constructor
        Reciever_Wallet()=default;
        Reciever_Wallet(string_view wallet){
            this->wallet = wallet;
        }

        //destructor
        ~Reciever_Wallet();

        //getter
        string get_reciever_wallet(){
            return wallet;
        }

    private:

        //value
        string wallet{"null"};
};


class Reward {

    public:
        //constructor
        Reward()=default;
        Reward(double reward_value){
            this->reward_value = reward_value;
        }

        //destructor
        ~Reward();

        //getter
        double get_reward_value(){
            return reward_value;
        }

    private:

        //value
        double reward_value{0};
};


class Sender_Signature{

    public:
        //constructor
        Sender_Signature()=default;
        Sender_Signature(string_view signature){
            this->signature = signature;
        }

        //destructor
        ~Sender_Signature();

        //getter
        string get_sender_signature(){
            return signature;
        }

    private:

        //value
        string signature{"null"};
};


class Sender_Wallet{

    public:
        //constructor
        Sender_Wallet()=default;
        Sender_Wallet(string_view wallet){
            this->wallet = wallet;
        }

        //destructor
        ~Sender_Wallet();

        //getter
        string get_sender_wallet(){
            return wallet;
        }

    private:

        //value
        string wallet{"null"};
};


class Transaction_ID{

    public:
        //constructor
        Transaction_ID()=default;
        Transaction_ID(string_view transaction_ID){
            this->transaction_ID = transaction_ID;
        }

        //destructor
        ~Transaction_ID();

        //getter
        string get_transaction_ID(){
            return transaction_ID;
        }

    private:

        //value
        string transaction_ID{"null"};
};


class Type{

    public:
        //constructor
        Type()=default;
        Type(string_view type){
            this->type = type;
        }

        //destructor
        ~Type();

        //getter
        string get_type(){
            return type;
        }

    private:

        //value
        string type{"TRANSACTION"};
};


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
        void print_contract(){
            cout << "CONTRACT" << endl;
            cout << "===============" << endl;
            cout << "type: " << get_type() << endl;
            cout << "transaction ID: " << get_transaction_ID() << endl;
            cout << "reciever wallet: " << get_reciever_wallet() << endl;
            cout << "sender wallet: " << get_sender_wallet() << endl;
            cout << "sender signature: " << get_sender_signature() << endl;
            cout << "data: " << get_data_value() << endl;
            cout << "reward: " << get_reward_value() << endl;
        }
};


