#include<iostream>
using namespace std;

class Shallow
{
	public:
	int age;
	string name;
	Shallow()
	{
		age = 20;
	}
	Shallow(string Name,int Age)
	{
		name = Name;
		age = Age;
	}
	void display()
	{
		cout << "Name:" << name << endl;
		cout << "Age:" << age << endl;
	}
};
int main()
{
	Shallow s1("krishna",23);
	Shallow s2("Anusha",22);
	
	s1.display();
	s2.display();
	
		
	cout <<  "Address s1:" << &s1.name <<endl;
	cout <<  "Address s2:" << &s2.name << endl;
	
	s1 = s2;
	
	s1.display();
	s2.display();

	cout <<  "Address s1:" << &s1.name <<endl;
	cout <<  "Address s2:" << &s2.name << endl;
	

}
