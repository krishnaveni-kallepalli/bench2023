#include<iostream>
using namespace std;
int count;
class Teacher 
{	
	public :
	Teacher()
	{
		cout << "Base class constructor\n";
		count = 0;
		cout << count << endl;
	}
	void StudentCount(int count);
	
};
void Teacher :: StudentCount(int count)
{
	cout << "Count:" << count << endl;
}
class Student : public Teacher
{
	public:
	string name;
	int roll;
	Student(int count):Teacher()
	{
		cout << "Derived class constructor\n";
		cout << "Enter no.of students:";
		cin >> count;
		StudentCount(count);
		if(count > 0)
		{
			cout << "Yes....!\n";
		}
	}
	void StudentDetails();	
	void Display();

};
void Student :: StudentDetails()
{
	cout << "StudentDetails:\n";
	cout << "Name:" ;
	cin >> name ;
	cout << "ID:";
	cin >> roll;
}
void Student :: Display()
{
	cout << "Display:\n";
	cout << "Name:" << name << endl;
	cout << "ID:" << roll << endl;
}

int main()
{
	
	class Teacher tech;
	tech.StudentCount(22);
	
	class Student stu(23);
	stu.StudentCount(45);
	stu.StudentDetails();
	stu.Display();
	return 0;
}
