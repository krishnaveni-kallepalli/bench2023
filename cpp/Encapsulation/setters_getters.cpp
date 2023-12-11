#include<iostream>
using namespace std;
class Student
{
	int id = 23;
	string name = "krishna";
	char div = 'A';
	void details()
	{
		cout << "ID : " << id << endl; 
		cout << "Name : " << name << endl; 
		cout << "Division : " << div << endl; 
	}
	public:
	void fun()
	{
		details();
	}
	void setData(int ID,string Name,char Division)
	{
		id = ID;
		name = Name;
		div = Division;
	}
	void getData()
	{
		cout << "ID : " << id << endl; 
		cout << "Name : " << name << endl; 
		cout << "Division : " << div << endl; 
	}
};
int main()
{
	int ID;
	char Div;
	string nm;
	class Student stu;
	stu.fun();
	cout << "Enter details:\n";
	
	cout << "Enter ID : ";
	cin >> ID;
	
	cout << "Enter Name : ";
	cin >> nm;
	
	cout << "ENter Division : ";
	cin >> Div;
	
	stu.setData(ID,nm,Div);
	stu.getData();
	
	stu.fun();
	return 0;
}
