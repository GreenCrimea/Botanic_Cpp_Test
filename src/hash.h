/*
Hash Class

***
Defines the hashing function

Value cannot be changed once object is defined.
*/
#include <iostream>
#include <string>
#include "block.h"

class Hashing_func {

    public:
        //constructor
        Hashing_func()=default;
        Hashing_func(double difficulty){
            this->difficulty = difficulty;
        }

        //destructor
        ~Hashing_func()=default;

        //hashing_func
        std::string hash_block(Block block){
            std::string hash_outcome{};

            return hash_outcome;
        }

    private:

        double difficulty{5};

};
