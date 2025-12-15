/*
Quiz 1: Student Management System
Create a class Student with:
Private data members: admissionNo, name, marks
Public methods:
input() – enter details
calculateGrade() – calculate grade based on marks:
A: ≥70

B: ≥60

C: ≥50

D: ≥40

F: <40

display() – show student info and grade
Challenge:
Ensure marks cannot be negative or above 100.*/

#include<iostream>
#include<string>

using namespace std;

class Student{
private:
    string admissionNo;
    string name;
    int marks;
public: 
    void input();
    void calculateGrade();
    void display();
    void getMarks();
};

void Student::input(){
    cout<<"Enter your first Name: ";
    cin>>name;
    cout<<"Enter your Admission Number: ";
    cin>>admissionNo;
    
}
void Student::getMarks(){
    cout<<"Enter your Avarage Marks: ";
    cin>>marks;
}
void Student::calculateGrade(){
    
    while(marks<=100 && marks>=0){
    if(marks<40){
        cout<<"Final Score: F\nYou Failed"<<endl;
    }else if(marks>=40 && marks<50){
        cout<<"Final Score: D"<<endl;
    }else if(marks>=50 && marks<60){
        cout<<"Final Score: C"<<endl;
    }else if(marks>=60 && marks<70){
        cout<<"Final Score: B"<<endl;
    }else if(marks>70){
        cout<<"Final Score: A"<<endl;
        cout<<"----------------- Congratulations----------------------"<<endl;
    }
    return;
    }
    if(marks>100 || marks<0){
        cout<<"Invalid input.. please ";
        getMarks();
    }
    display();
}
void Student::display(){
    cout<<"-------STUDENTS DETAILS---------------"<<endl;
    cout<<"Students Name: "<<name<<endl;
    cout<<"Students Admission Number: "<<admissionNo<<endl;
    calculateGrade();
}

int main(){
    Student Stud1;
    
    
    Stud1.input();
    Stud1.getMarks();
    Stud1.calculateGrade();
    
    return 0;
}
