/*
C_Reward Class

***
Defines the mining reward paid out if a contract is added to the
next block.

Value cannot be changed once object is defined.

Inherited by Contracts.
*/

class Reward {

    public:
        //constructor
        Reward();
        Reward(double reward_value);

        //destructor
        ~Reward();

        //getter
        double get_reward_value();

    private:

        //value
        double reward_value{0};
};