#include<iostream>
using namespace std;
class Add
{
	public:
	
	int add(int a,int b)
	{
		return a+b;
	}
	string add(string s1, string s2)
	{
		return s1+s2;
	}
};
int main()
{
	class Add stu;
	string s1="prem";
	string s2 = "kumar";
	
	int a=23,b=5;
	int x=stu.add(a,b);
	string y = stu.add(s1,s2);
	cout << y << x << endl;

	cout << stu.add(a,b)<< endl;
	cout << stu.add(s1,s2) << endl;
}
