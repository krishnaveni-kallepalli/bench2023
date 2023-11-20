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
	int i;
	struct student *ptr[3];
	for(i=0;i<3;i++)
		ptr[i] = new struct student;
	for(i=0;i<3;i++)
	{
		cout <<  "Enter Name:" ,cin >> ptr[i]->name;
		cout <<  "Enter ID:" ,cin >> ptr[i]->roll ;
		cout <<  "Enter Section:",cin >> ptr[i]->section ;
		cout << "\n";

		cout << "Name:" << ptr[i]->name << endl;
		cout << "ID:" << ptr[i]->roll <<endl;
		cout << "Section:" << ptr[i]->section << endl;
		cout << "\n";
	}
	
	return 0;
}
