/*

Question 2: OOP - Inheritance & Polymorphism (30 marks)
Task: Create a class hierarchy:
Base class Shape with:
        Virtual function double area() = 0.
        Virtual function void display() to print area.
Derived classes:
        Circle (with radius).
        Rectangle (with length/width).
In main():
    Dynamically create one Circle and one Rectangle.
    Use a base-class pointer to call display() for both.
    Deallocate memory properly.
Example Output: Circle Area: 78.5398 Rectangle Area: 24

*/
#include<iostream>
#include<string>

using namespace std;

class Shape{
public:
    virtual double area() = 0;
    virtual void display();
};

class Circle: public Shape{

};

class Rectangle: public Shape{

};


int main(){
    
}