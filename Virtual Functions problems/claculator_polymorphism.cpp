/*
Problem 1: Simple Calculator
Create a class Calculator with:
Two integers
Functions: add(), subtract(), multiply(), divide()
Input values inside main()
Goal: get comfortable with methods + objects
*/

#include<iostream>
#include<string>

using namespace std;

class Calculator{
private:
    int a,b;
public:
    Calculator(){
        int num = a;
        int num2 = b;
    }
    int add(){
        return a+b;
    }
    int subtract(){
        return a-b;
    }
    int multiply(){
        return a*b;
    }
    double divide(){
        return a/b;
    }   

};

int main(){
    cout<<"Enter the values"<<endl;
    cout<<"Number: "
    cin>>num;

    cout<<"2nd Number: ";
    cin>>num;
}
