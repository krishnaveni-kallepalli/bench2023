#include<iostream>
using namespace std;

class Teacher 
{
	public:
    void fun() 
    {
        cout << "This is fun() from Teacher\n";
    }
};

class Student : public Teacher 
{
	public:
    void fun() 
    {
        cout << "This is fun() from Student\n";
    }
};

int main() {
    int choice;
    cout << "Enter choice:";
    cin >> choice;

    Student* stu[choice];

    bool callStudentFun; 

    cout << "Enter 0 to call Teacher's fun(), 1 to call Student's fun():";
    cin >> callStudentFun;

    for (int i = 0; i < choice; ++i)
    {
        stu[i] = new Student; 

        if (callStudentFun) 
            stu[i]->fun(); 
        else 
            stu[i]->Teacher::fun();
    }

    for (int i = 0; i < choice; ++i)
    {
        delete stu[i]; 
    }

    return 0;
}
