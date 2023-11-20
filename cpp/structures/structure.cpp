#include<iostream>
using namespace std;
struct student 
{
	string name;
	int roll;
	char section;
};
int main()
{
	struct student stu={"krishna",22,'A'};
	cout << "Name:" << stu.name << endl;
	cout << "ID:" << stu.roll <<endl;
	cout << "Section:" << stu.section << endl;
	
}
