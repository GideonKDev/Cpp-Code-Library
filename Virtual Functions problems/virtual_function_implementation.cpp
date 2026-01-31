/*
Problem: Create a base class Instrument with a virtual function play(). 
Create two derived classes Guitar and Piano that override the play() 
method to output different sounds. 
Create an array of Instrument pointers, store both Guitar and Piano objects in it, 
and call play() for each.

Requirements:
Base class Instrument with virtual play() method
Guitar::play() should output "Strumming strings"
Piano::play() should output "Pressing keys"
Use polymorphism to call the correct method

*/

#include<iostream>
#include<string>

using namespace std;

class Instrument{
public:
    virtual void play(){
        cout<<"Instrument play"<<endl;
    }
};

class Guitar : public Instrument{
public:
    void play(){
        cout<<"Strumming strings"<<endl;
    }
};

class Piano : public Instrument{
public:
    void play(){
        cout<<"Pressing keys"<<endl;
    }
};