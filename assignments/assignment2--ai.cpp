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
    char grade;
    
public: 
    void input();
    void calculateGrade();
    void display();
    bool setMarks(int m);  // Changed to validate marks
};

bool Student::setMarks(int m){
    if(m < 0 || m > 100){
        cout << "Invalid marks! Marks must be between 0 and 100." << endl;
        return false;
    }
    marks = m;
    return true;
}

void Student::input(){
    cout << "Enter your Name: ";
    cin.ignore();  // Clear input buffer
    getline(cin, name);  // Allows full names with spaces
    
    cout << "Enter your Admission Number: ";
    getline(cin, admissionNo);
    
    // Get and validate marks
    int m;
    do {
        cout << "Enter your Average Marks (0-100): ";
        cin >> m;
    } while (!setMarks(m));
}

void Student::calculateGrade(){
    if(marks >= 70){
        grade = 'A';
    } else if(marks >= 60){
        grade = 'B';
    } else if(marks >= 50){
        grade = 'C';
    } else if(marks >= 40){
        grade = 'D';
    } else {
        grade = 'F';
    }
}

void Student::display(){
    // Calculate grade first
    calculateGrade();
    
    cout << "\n------- STUDENT DETAILS -------" << endl;
    cout << "Student's Name: " << name << endl;
    cout << "Admission Number: " << admissionNo << endl;
    cout << "Marks: " << marks << endl;
    cout << "Grade: " << grade << endl;
    
    if(grade == 'A'){
        cout << "----------------- Congratulations ----------------------" << endl;
    } else if(grade == 'F'){
        cout << "You Failed" << endl;
    }
}

int main(){
    Student Stud1;
    
    Stud1.input();
    Stud1.display();  // display() will call calculateGrade() internally
    
    return 0;
}