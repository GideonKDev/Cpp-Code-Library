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
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string admissionNo;
    string name;
    int marks;

public:
    void input();
    void getMarks();
    char calculateGrade();
    void display();
};

void Student::input() {
    cout << "Enter Name: ";
    cin >> name;
    cout << "Enter Admission Number: ";
    cin >> admissionNo;
}

void Student::getMarks() {
    do {
        cout << "Enter Marks (0 - 100): ";
        cin >> marks;
    } while (marks < 0 || marks > 100);
}

char Student::calculateGrade() {
    if (marks >= 70) return 'A';
    else if (marks >= 60) return 'B';
    else if (marks >= 50) return 'C';
    else if (marks >= 40) return 'D';
    else return 'F';
}

void Student::display() {
    cout << "\n----- STUDENT DETAILS -----\n";
    cout << "Name: " << name << endl;
    cout << "Admission No: " << admissionNo << endl;
    cout << "Marks: " << marks << endl;
    cout << "Grade: " << calculateGrade() << endl;
}

int main() {
    Student s;
    s.input();
    s.getMarks();
    s.display();
    return 0;
}
