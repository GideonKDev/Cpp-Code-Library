#include <iostream>
#include <string>

using namespace std;

// -------- Base Class --------
class Vehicle {
protected:
    string plateNumber;
    string model;
    double baseFee;

public:
    Vehicle();
   virtual void inputData();
   virtual void display();
};

Vehicle::Vehicle() {
    plateNumber = "";
    model = "";
    baseFee = 0;
}

void Vehicle::inputData() {
    cout << "Enter plate number: ";
    getline(cin, plateNumber);

    cout << "Enter model: ";
    getline(cin, model);

    cout << "Enter base fee: ";
    cin >> baseFee;
    cin.ignore();
}

void Vehicle::display() {
    cout << "\n--- Standard Vehicle Details ---\n";
    cout << "Plate Number: " << plateNumber << endl;
    cout << "Model: " << model << endl;
    cout << "Total Cost: " << baseFee << endl;
}

// -------- Derived Class --------
class LuxuryVehicle : public Vehicle {
private:
    double extraInsurance;
    double gpsFee;

public:
    LuxuryVehicle();
    void inputData();
    void display();
};

LuxuryVehicle::LuxuryVehicle() {
    extraInsurance = 0;
    gpsFee = 0;
}

void LuxuryVehicle::inputData() {
    Vehicle::inputData();

    cout << "Enter extra insurance fee: ";
    cin >> extraInsurance;

    cout << "Enter GPS fee: ";
    cin >> gpsFee;
    cin.ignore();
}

void LuxuryVehicle::display() {
    double total = baseFee + extraInsurance + gpsFee;

    cout << "\n--- Luxury Vehicle Details ---\n";
    cout << "Plate Number: " << plateNumber << endl;
    cout << "Model: " << model << endl;
    cout << "Total Cost: " << total << endl;
}

// -------- Main --------
int main() {
    int choice;

    cout << "1. Standard Vehicle\n";
    cout << "2. Luxury Vehicle\n";
    cout << "Choose vehicle type: ";
    cin >> choice;
    cin.ignore();

    if (choice == 1) {
        Vehicle v;
        v.inputData();
        v.display();
    }
    else if (choice == 2) {
        LuxuryVehicle lv;
        lv.inputData();
        lv.display();
    }
    else {
        cout << "Invalid choice";
    }

    return 0;
}