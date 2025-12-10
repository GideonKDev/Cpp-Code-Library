// Constructor Overloading in C++
// This program shows how a class can have multiple constructors
// with different parameters.

#include <iostream>
#include <string>
using namespace std;

// Define a class named Car
class Car {
  public:
    // Data members (attributes)
    string brand;
    string model;

    // 1. Default constructor (no parameters)
    //    This runs when you create an object without giving values.
    Car() {
      brand = "Unknown";
      model = "Unknown";
    }

    // 2. Parameterized constructor (takes two values)
    //    This runs when you create an object AND give brand & model.
    Car(string b, string m) {
      brand = b;
      model = m;
    }
};

int main() {
  // Creating objects using different constructors

  Car car1;  
  // Uses default constructor → brand = "Unknown", model = "Unknown"

  Car car2("BMW", "X5");  
  // Uses parameterized constructor → brand = "BMW", model = "X5"

  Car car3("Ford", "Mustang");
  // Uses parameterized constructor → brand = "Ford", model = "Mustang"

  // Displaying values stored in each object
  cout << "Car1: " << car1.brand << " " << car1.model << "\n";
  cout << "Car2: " << car2.brand << " " << car2.model << "\n";
  cout << "Car3: " << car3.brand << " " << car3.model;

  return 0;
}
