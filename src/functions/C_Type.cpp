/*
C_TypeFunction Definitions
*/
#include "C_Type.h"
#include <string_view>
#include <string>
using namespace std;


Type::Type(string_view type){
    this->type = type;
}

//getter
string Type::get_type(){
    return type;
}