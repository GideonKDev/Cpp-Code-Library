// Define a Method/ function inside a class
#include<iostream>
#include<string>

using namespace std;
//Defining a method inside a class
 
 class Myclass{
    public:
    void myMethod(){
        //function defined inside a class
        cout<<"Hello world";
    }
 };

 int main(){
    Myclass Myobject;
    Myobject.myMethod();// call the method inside the class
    return 0;
 }

 //defining a method outside a class

 class Myclass2{
    public:
    void myMethod2(); // declaring myMethod 
 };

void Myclass2::myMethod2(){
    cout<<"hello world"<<endl;
}

int main(){
    Myclass2 myObject2;
    myObject2.myMethod2();
    return 0;
}