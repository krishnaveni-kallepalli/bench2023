#include<iostream>
using namespace std;
struct student 
{
	string name="krishna";
	int roll=23;
	char section='A';
};
int main()
{
	struct student stu;
	cout << "Name:" << stu.name << endl;
	cout << "ID:" << stu.roll <<endl;
	cout << "Section:" << stu.section << endl;
	
}
