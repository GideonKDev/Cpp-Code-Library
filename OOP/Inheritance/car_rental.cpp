/*
Problem 1: The Vehicle Rental System (Basic Inheritance)
A car rental agency needs a system to track standard cars and luxury cars.
Base Class (Vehicle):
    Data: 
        plateNumber, 
        model, 
        baseFee.
    
    Functions: 
        inputData(), 
        display().
    
    Derived Class 
    (LuxuryVehicle):Inherits from Vehicle.
        Data: extraInsurance, 
        gpsFee.
    
    Functionality: 
        Override the display() function to show the total cost, which is $
        baseFee + extraInsurance + gpsFee$.
The Challenge: Write a program where a user can choose a standard or luxury vehicle and see the final rental price.

*/

#include<iostream>
#include<string>

using namespace std;

class Vehicle{
    protected:
        string plateNumber;
        string model;
        double baseFee;

    public:
        Vehicle();
        void inputData();
        void display();

};

Vehicle::Vehicle(){
    plateNumber = " ";
    model = " ";
    baseFee = 0;
}

void Vehicle::inputData(){
    cout<<"Enter the Plate Number of the vehicle: ";
    getline(cin, plateNumber);

    cout<<"Model of the vehicle:  ";
    getline(cin, model);

    cout<<"Base Fee of the vehicle:  ";
    cin>>baseFee;
    cin.ignore();

}

void Vehicle::display(){
    cout<<"==============================================="<<endl;
    cout<<"===========STANDARD VEHICLE DETAILS =========="<<endl;
    cout<<"==============================================="<<endl;
    cout<<"Plate Number     : "<<plateNumber<<endl;
    cout<<"Model            : "<<model<<endl;
    cout<<"Amount           : "<<baseFee<<endl;


}


class LuxuryVehicle: public Vehicle{
    private:
    double extraInsurance;
    double gpsFee;

    public:
    LuxuryVehicle();
    void inputData();
    void display();
};

LuxuryVehicle::LuxuryVehicle(){
   // Vehicle::Vehicle();
    extraInsurance = 0;
    gpsFee = 0;
}

void LuxuryVehicle::inputData(){
    Vehicle::inputData();

    cout<<"Enter extra insurance fee: ";
    cin>>extraInsurance;
    
    cout<<"Enter gps Fee: ";
    cin>>gpsFee;

   cin.ignore();
}

void LuxuryVehicle::display(){
    cout<<"==============================================="<<endl;
    cout<<"===========LUXURY VEHICLE DETAILS=========="<<endl;
    cout<<"==============================================="<<endl;
    cout<<"Plate Number     : "<<plateNumber<<endl;
    cout<<"Model            : "<<model<<endl;

    double total = baseFee + extraInsurance + gpsFee;
    cout<<"Amount           : "<<total<<endl; 

}

int main(){
    cout<<"Welcome to vehicle management systems "<<endl;
    cout<<"Which vehicle are you recording details for???"<<endl;
    cout<<"1. Standard Vehicle"<<endl;
    cout<<"2. Luxury Vehicle"<<endl;

    int choice;
    cin>>choice;
    cin.ignore();

    if (choice == 1){
        Vehicle car1;
        car1.inputData();
        car1.display();

    }else if (choice == 2){
        LuxuryVehicle car2;
        car2.inputData();
        car2.display();

    }else{
        cout<<" Invalid input ";
    }

    return 0;
}