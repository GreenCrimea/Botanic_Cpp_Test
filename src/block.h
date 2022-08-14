/*
Block Class

***
Defines a single block.

Value cannot be changed once object is defined.

Inherits Index, Timestamp, Proof, Previous_proof, Contracts_Array
*/
#include <string_view>
#include <string>
#include "Contracts.h"
using namespace std;


class Index {

    public:
        //constructor
        Index()=default;
        Index(double index_value){
            this->index_value = index_value;
        }

        //destructor
        ~Index()=default;

        //getter
        double get_index_value(){
            return index_value;
        }
    
    private:

        //value
        double index_value{0};
};


class Timestamp {

    public:
        //constructor
        Timestamp()=default;
        Timestamp(string_view timestamp){
            this->timestamp = timestamp;
        }

        //destructor
        ~Timestamp()=default;

        //getter
        string get_timestamp(){
            return timestamp;
        }

    private:

        //value
        string timestamp{"null"};
};


class Proof {

    public:
        //constructor
        Proof()=default;
        Proof(string_view proof){
            this->proof = proof;
        }

        //destructor
        ~Proof()=default;

        //getter
        string get_proof(){
            return proof;
        }

    private:

        //value
        string proof{"null"};
};


class Previous_Proof {

    public:
        //constructor
        Previous_Proof()=default;
        Previous_Proof(string_view previous_proof){
            this->previous_proof = previous_proof;
        }

        //destructor
        ~Previous_Proof()=default;

        //getter
        string get_previous_proof(){
            return previous_proof;
        }

    private:

        //value
        string previous_proof{"null"};
};


class Contracts_Array {

    public:
        //constructors
        Contracts_Array()=default;
        Contracts_Array(Contracts contracts_array[]){
            for(int i; i < block_size; ++i){
                this->contracts_array[i] = contracts_array[i];
            }
        }

        //destructor
        ~Contracts_Array()=default;

        //getter
        int get_block_size(){
            return block_size;
        }
        Contracts get_contracts_array(int index){
            return contracts_array[index];
        }

    private:
        int block_size {2};
        Contracts contracts_array[];
};


class Block :   public Index, 
                public Timestamp,
                public Proof,
                public Previous_Proof,
                public Contracts_Array {
    
    public:
        //constructors
        Block()=default;

        //destructor
        ~Block()=default;

        //printer
        void print_block(){
            cout << "BLOCK" << endl;
            cout << "=============" << endl;
            cout << "index: " << get_index_value() << endl;
            cout << "timestamp: " << get_timestamp() << endl;
            cout << "proof: " << get_proof() << endl;
            cout << "Previous proof: " << get_previous_proof() << endl;
            cout << "Contracts: " << endl;
            int block_size = get_block_size();
            for(int i; i < block_size; ++i){
                cout << "contract " << i << endl;     
                cout << "===============" << endl;
                get_contracts_array(i).print_contract();
            }
        }

};