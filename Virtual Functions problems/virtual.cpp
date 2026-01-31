#include<iostream>
#include<string>

using namespace std;

class Animal{
public:
     virtual void sound(){
        cout<<"Animal Sound"<<endl;
    }
};


class Dog : public Animal{
public:
    void sound(){
        cout<<"Barking"<<endl;
    }
};

int main(){
    Animal* a;// Declaring a pointer to the base class (Animal)
    Dog d;// Creating an object of the derived class (Dog)
    
   // d.sound();
    a = &d;

    a->sound();// call the sound() function using the pointer. Since sound() is not virtual, this calls the animal's version
    
    return 0;
}