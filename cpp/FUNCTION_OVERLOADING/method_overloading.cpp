#include<iostream>
using namespace std;
class Addition
{
	public:
	int ADD(int a,int b);
	string ADD(string s1,string s2);
};

int Addition :: ADD(int a,int b)
{
	return a+b;
}
string Addition :: ADD(string s1,string s2)
{
	return s1+s2;
}
int main()
{
	string s1="krishna",s2="veni";
	int a=2,b=3;
	Addition add;
	cout << add.ADD(s1,s2) << endl;
	cout << add.ADD(a,b) << endl;
	return 0;
}

/*
#include<iostream>
using namespace std;
class Addition
{
	public:
	int ADD(int a,int b)
	{
		return a+b;
	}
	string ADD(string s1,string s2)
	{
		return s1+s2;
	}
};
int main()
{
	string s1="krishna",s2="veni";
	int a=2,b=3;
	Addition add;
	cout << add.ADD(s1,s2) << endl;
	cout << add.ADD(a,b) << endl;
	return 0;
}

*/
