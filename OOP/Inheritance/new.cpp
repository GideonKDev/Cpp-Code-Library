/*
A rectangle has length and width and its are is obtained by multiplying the two.
a triangle has similar dimensions but its are is (1/2*l*w)

*/

#include <iostream>
#include <string>

using namespace std;

class Shape{
protected:
    float length;
    float width;
public:
    Shape();
};

Shape::Shape(){

   cout<<"Length: ";
   cin>>length;

   cout<<"Width: ";
   cin>>width;
}


class Rectangle:public Shape{
public:
    float calculateArea(){
        return length * width ;
    }
};

class Triangle:public Shape{
public:
    float calculateArea(){
        return (length * width)/2 ;
    }
};

int main(){
  int choice;

    cout << "1. Rectangle\n";
    cout << "2. Triangle\n";
    cout << "Choose Shape type: ";
    cin >> choice;
    cin.ignore();

    if (choice == 1){
        Rectangle R1;
        cout << "Area = " << R1.calculateArea() <<" Square Units"<< endl;
    }else if (choice == 2){
        Triangle T1;
        cout << "Area = " << T1.calculateArea() <<" Square Units" << endl;
    }

return 0;






}
