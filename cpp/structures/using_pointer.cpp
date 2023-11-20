#include<iostream>
using namespace std;
struct student 
{
	string name;
	int roll;
	char section;
};

int main() {
    struct student stu, *ptr;
    ptr = new struct student;

    cout << "Enter Name: ";
    cin >> ptr->name;
    cout << "Enter ID: ";
    cin >> ptr->roll;
    cout << "Enter Section: ";
    cin >> ptr->section;

    cout << "\n";

    cout << "Name: " << ptr->name << endl;
    cout << "ID: " << ptr->roll << endl;
    cout << "Section: " << ptr->section << endl;

    delete ptr;

    return 0;
 }
    
