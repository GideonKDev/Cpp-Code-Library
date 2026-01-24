/*
Challenge 2: University Fee Management System
Scenario
A university wants a simple system to manage students and hostel students.
Base Class: Student
Data members
    name
    regNumber
    tuitionFee

Member functions
    inputData()
    display()
    calculateTotal() → returns tuition fee only

Derived Class: HostelStudent (inherits from Student)
    Additional data
    hostelFee
    mealFee
    Overrides calculateTotal() → returns

tuitionFee + hostelFee + mealFee

display() → must show total payable amount
*/

#include<iostream>
#include<string>

using namespace std;

class Student{
    protected:
    string name;
    string regNo;
    double tutionFee;

    public:
    Student();
    void inputdata();
    void display();
    double calculateTotal();

};

Student::Student(){
    name = " ";
    regNo = " ";
    tutionFee = 0.00;
}

void Student::inputdata(){
    cout<<"======Regular Student========= "<<endl;
    cout<<"Name: ";
    getline(cin, name);

    cout<<"Registration Number: ";
    getline(cin, regNo);

    cout<<"Tution Fee: ";
    cin>>tutionFee;

    cin.ignore();

}

double Student::calculateTotal(){
    return tutionFee;
}

void Student::display(){
    cout<<"======= Students Details ========="<<endl;
    cout<<"Name                 : "<<name<<endl;
    cout<<"Registration Number  : "<<regNo<<endl;;
    cout<<"Fee Payable          : "<<calculateTotal()<<endl;
}

class HostelStudent:public Student{
    private:
    double hostelFee;
    double mealFee;
    public:
    HostelStudent();
    void inputdata();
    void display();
    double calculateTotal();
};

HostelStudent::HostelStudent(){
    hostelFee = 0.00;
    mealFee = 0.00;
}

void HostelStudent::inputdata(){
    Student::inputdata();

    cout<<"Hostel Fee: ";
    cin>>hostelFee;

    cout<<"Meal Fee: ";
    cin>>mealFee;

    cin.ignore();
}

double HostelStudent::calculateTotal(){
    double totalFee = hostelFee + mealFee + tutionFee;

    return totalFee;
}

void HostelStudent::display(){
    cout<<"======= Hostel Student Details ========="<<endl;
cout<<"Name : "<<name<<endl;
cout<<"Registration Number : "<<regNo<<endl;
cout<<"Total Fee Payable : "<<calculateTotal()<<endl;
}

int main(){
    HostelStudent S1;
    S1.inputdata();
    S1.display();

}