#include<iostream>
#include<string.h>

using namespace std;

//create a class called MyClass
class MyClass{
    public: //access specifier
        int myNum;
        string myString; // Attributes
};

//create an object called "myObj" and access the attributes
int main(){
    MyClass myObj; //creating an object of MyClass

    //access the attributes and set values
    myObj.myNum = 15;
    myObj.myString = "Kirui";

    //print attributes values
    cout<<myObj.myNum<<"\n";
    cout<<myObj.myString;

    return 0;
}

