#include <iostream>
using namespace std;
/*ref:
https://youtube.com/playlist?list=PLy3px7ccyKLfdDoR_uA_Wo_whcfTACL0y
*/

int main () {

    cout << "C867 - Scripting and Programming Applications" << endl;
    cout << "Language: C++" << endl;
    cout << "Student ID: 009460288" << endl;
    cout << "Ruben Huerta" << endl;


    const string studentData[] = {
        "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
        "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
        "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
        "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
        "A5,Ruben,Huerta,rhuert5@wgu.edu,23,18,24,43,45,SOFTWARE"
    };

    const int numStudents = 5 /*this is for an array*/
    Repo repo; /*creates the repo using the default parameterless constructor*/


    /*Parses each student until the max index is reached*/
    for (int i = 0; i < numStudents; i++) repo.parse(studentData[i]); 
    cout << "Displaying all students:" << endl;
    repo.printAll(); 
};