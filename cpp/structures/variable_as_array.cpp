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
	struct student stu[3];
	for(i=0;i<3;i++)
	{
		cout <<  "Enter Name:" ;
		cin >> stu[i].name;
		cout <<  "Enter ID:" ;
		cin >> stu[i].roll ;
		cout <<  "Enter Section:" ;
		cin >> stu[i].section ;

	cout << "\n";

		cout << "Name:" << stu[i].name << endl;
		cout << "ID:" << stu[i].roll <<endl;
		cout << "Section:" << stu[i].section << endl;
	}
	return 0;
}
