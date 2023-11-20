#include<iostream>
using namespace std;
class ADD
{
	public:
	ADD(int a,int b)
	{
		cout << a+b << endl;
	}
	ADD(string s1,string s2)
	{
		cout << s1+s2 << endl;
	}
};
int main()
{
	string s1="krishna",s2="veni";
	int a=2,b=3;
	ADD obj(s1,s2), obj1(a,b);
	return 0;
}
