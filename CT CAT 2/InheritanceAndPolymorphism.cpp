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
// #include<iostream>
// #include<string>

// using namespace std;

// class Shape{
// protected:
//     double area;
// public:
//     Shape();
//     virtual double area() = 0;
//     virtual void display() = 0;
//     virtual ~Shape(){}
// };


// class Circle: public Shape{
// private:
//     int radius;
// public:
//     Circle(int radius){
//     this -> radius = radius;
//     }
//     double area() override{
//         return 3.142*radius*radius;
//     }
//     void display() override{
//         cout<<"Area of Circle: "<<area()<<"Squared Units"<<endl;
//     }
// };


// class Rectangle: public Shape{
// private:
//     int len, wid;
// public:
//     Rectangle(int len,int wid){
//         this->len = len;
//         this->wid = wid;
//     }
//     double area() override{
//         return len*wid;
//     }
//     void display() override{
//         cout<<"Area of Rectangle: "<<area()<<endl;
//     }
// };


// int main(){
//     Shape* s1;
//     Shape* s2;

//     s1 = new Circle(5);
//     s2 = new Rectangle(4,6);

//     s1 -> display();
//     s2 -> display();

//     return 0;
// }
#include<iostream>
using namespace std;

class Shape {
public:
    virtual double area() = 0;
    virtual void display() = 0;
    virtual ~Shape() {}  // Virtual destructor for proper cleanup
};

class Circle : public Shape {
private:
    double radius;  // Use double for consistency with area calculation
public:
    Circle(double r) : radius(r) {}
    
    double area() override {
        return 3.141592653589793 * radius * radius;  // More precise PI value
    }
    
    void display() override {
        cout << "Circle Area: " << area() << endl;  // Match example format
    }
    
    ~Circle() override = default;  // Destructor (though not strictly necessary here)
};

class Rectangle : public Shape {
private:
    double length, width;  // Use double for consistency
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    
    double area() override {
        return length * width;
    }
    
    void display() override {
        cout << "Rectangle Area: " << area() << endl;  // Match example format
    }
    
    ~Rectangle() override = default;  // Destructor
};

int main() {
    Shape* s1 = nullptr;
    Shape* s2 = nullptr;
    
    // Dynamically create objects
    s1 = new Circle(5.0);      // Radius 5
    s2 = new Rectangle(4.0, 6.0); // Length 4, Width 6
    
    // Use base-class pointers to call display()
    s1->display();
    s2->display();
    
    // Deallocate memory properly
    delete s1;
    delete s2;
    
    return 0;
}