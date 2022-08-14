/*
C_TypeFunction Definitions
*/
#include "C_Type.h"
#include <string_view>
#include <string>
using namespace std;


//constructor
Type::Type() = default;

Type::Type(string_view type){
    this->type = "TRANSACTION";
}

//getter
string Type::get_type(){
    return type;
}