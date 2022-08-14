/*
C_Data Function Definitions
*/
#include "C_Data.h"


//constructor
Data::Data() = default;

Data::Data(double data_value){
    this->data_value = data_value;
}

//getter
double Data::get_data_value(){
    return data_value;
}