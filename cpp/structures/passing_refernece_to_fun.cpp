#include<iostream>
using namespace std;
struct student 
{
	string name;
	int roll;
	char section;
};
void details(struct student &stu)
{
	cout << "Name:" << stu.name << endl;
	cout << "ID:" << stu.roll <<endl;
	cout << "Section:" << stu.section << endl;
}
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
	details(stu);
	
	return 0;
}
