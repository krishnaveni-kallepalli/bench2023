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
	struct student stu;
	cout <<  "Enter Name:" ;
	cin >> stu.name;
	cout <<  "Enter ID:" ;
	cin >> stu.roll ;
	cout <<  "Enter Section:" ;
	cin >> stu.section ;
	
	
	cout << "\n";
	
	cout << "Name:" << stu.name << endl;
	cout << "ID:" << stu.roll <<endl;
	cout << "Section:" << stu.section << endl;
	return 0;
}
