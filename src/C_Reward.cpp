/*
C_Reward Function Definitions
*/
#include "C_Reward.h"


//constructor
Reward::Reward() = default;

Reward::Reward(double reward_value){
    this->reward_value = reward_value;
}

//getter
double Reward::get_reward_value(){
    return reward_value;
}