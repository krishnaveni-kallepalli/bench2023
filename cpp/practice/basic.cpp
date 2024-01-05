#include<iostream>
using namespace std;
class Student
{
	private:
	int num;
	string name;
	public:
	Student(){
	cout << "Default constructor\n";
	}
	Student(int num,string data)
	{
		this->num = num;
		this->name = name;	
	}
	Student(const Student &obj)
	{
		cout << "Copy constructor\n";
	}
	void fun(int num,string name)
	{
		std::cout << "num = " << num << std::endl;
		std::cout << "name = " << name << std::endl;
	}
};

int main()
{
	
	int NUM=23;
	string NAme="prem";
	class Student stu(NUM,NAme);
	stu.fun(NUM,NAme);
}
