#pragma once
#include <iostream>
#include <iomanip>
#include "student.cpp"

Student::Student()
{
    this->studentID = "";
    this->firstName = "";
    this->lastName = "";
    this->email = "";
    this->age = 0;
    for (int i = 0; i < daysInCourseArraySize; i++) this-> daysInCourse[i] = 0; 
    this->degreeProgram = DegreeProgram::SOFTWARE;
}

Student::Student(string studentID, string firstName, string lastName, string email, int age, int daysInCourse[], DegreeProgram degreeProgram)
{
    this->studentID = studentID;
    this->firstName = firstName;
    this->lastName = lastName;
    this->email = email;
    this->age = age;
    for (int i = 0; i < daysInCourseArraySize; i++) this-> daysInCourse[i] = daysInCourse[i];/*goes through each item in the daysInCourse arr*/
    this->degreeProgram = degreeProgram;
}

Student::~Student(){} /*Destructor*/

/*getters*/
string Student::getStudentID() { return this->studentID; }
string Student::getFirstName() { return this->firstName; }
string Student::getLastName() { return this->lastName; }
string Student::getEmail() {return this->email; }
int Student::getAge() { return this->age; }
int* Student::getDaysInCourse() { return this->daysInCourse; }
DegreeType Student::getDegreeProgram() { return this->degreeProgram }

/*setters*/
void Student::setStudentID(string studentID) { this->studentID = studentID; }
void Student::setFirstName(string firstName) { this->firstName = firstName; }
void Student::setLastName(string lastName) { this->lastName = lastName; }
void Student::setEmail(string email) { this->email = email; }
void Student::setAge(int age) { this->age = age; }
void Student::setDaysInCourse(int daysInCourse[]) {
    for (int i = 0; i < daysInCourseArraySize; i++) this-> daysInCourse[i] = daysInCourse[i];
}
void Student::setDegreeProgram(DegreeProgram dp) { this->degreeProgram = dp; }

void Student::printHeader() {
    cout << "Output Format: Student ID | First Name | Last Name | Email | Age | Days In Course | Degree Program"
}

void Student::print() {
    cout << this->getStudentID << '\t'; 
    cout << this->getFirstName << '\t';
    cout << this->getLastName << '\t';
    cout << this->getEmail << '\t';
    cout << this->getAge << '\t';
    cout << this->getDaysInCourse[0] << ',';
    cout << this->getDaysInCourse[1] << ',';
    cout << this->getDaysInCourse[2] << '\t';
    cout << degreeProgramStrings[this->getDegreeProgram()] << '\n';
    }

