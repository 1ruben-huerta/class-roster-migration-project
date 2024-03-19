#pragma once
#include <iostream>
#include <iomanip>
#include "student.h"
#include "degree.h"
using std::string;
using std::cout;


class Student 
{
    public:
        const static int daysInCourseArraySize = 3;

    private:
        string studentID;
        string firstName;
        string lastName;
        string email;
        int    age;
        int    daysInCourse[daysInCourseArraySize];
        DegreeProgram degreeProgram;

    public:
        Student(); /*Sets constructor to default values*/
        Student(string studentID, string firstName, string lastName, string email, int age, int daysInCourse[], DegreeProgram degreeProgram); /*Constructor*/
        ~Student(); /*Destructor*/
    
    /*Accessors*/
    string getStudentID();
    string getFirstName();
    string getLastName();
    string getEmail();
    int    getAge();
    int    getDaysInCourse();
    DegreeProgram getDegreeProgram();

    /*Mutators*/
    void setStudentID(string studentID);
    void setFirstName(string firstName);
    void setLastName(string lastName);
    void setEmail(string email);
    void setAge(int age);
    void setDaysInCourse(int dayInCourse[]);
    void setDegreeProgram(DegreeProgram dp);

    static void printHeader();/*prints a header to show what's coming next*/

    void print(); /*prints a specific students data*/
};