#include<iostream>
#include<string>
using namespace std;

//create a Car class with some attributes

class Car{
    public:
        string brand;
        string model;
        int Year;
};

//creating an object
int main(){
    //first object
    Car carObj1;
    carObj1.brand = "Mercedes";
    carObj1.model = "V8";
    carObj1.Year  = 2025;

    //second Object
    Car carObj2;
    carObj2.brand = "Ford";
    carObj2.model = "Mustang";
    carObj2.Year  = 2026;

    //print attribute values

    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.Year <<endl;
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.Year << "\n";
  return 0;
}

//Assignment-- Create a class called Book with the following attributes
//Title (string), author (string), year (int)

class Book{
    public: 
        string title;
        string author;
        int year;
};
int main(){
    Book Object1;
    Object1.title = "Matilda";
    Object1.author = "Roald Dahl";
    Object1.year = 1988;

    Book Object2;
    Object2.title = "The Giving Tree";
    Object2.author = "Shel Silverstein";
    Object2.year = 1964;

    cout << Object1.title << "," << Object1.author << "," <<Object1.year <<endl;
    cout << Object2.title << "," << Object2.author << "," <<Object2.year <<endl;
    
  return 0;
}