/*
C_Data Class

***
Defines the data contained within a contract.
!!!UNTIL SMART CONTRACTS ARE IMPLEMENTED THIS CAN ONLY BE DOUBLE!!!
!!!ONLY DEFINES TOKEN AMOUNTS!!!

Value cannot be changed once object is defined.

Inherited by Contracts.
*/

class Data {

    public:
        //constructor
        Data()=default;
        Data(double data_value);

        //destructor
        ~Data();

        //getter
        double get_data_value();

    private:

        //value
        double data_value{0};
};