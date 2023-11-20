#include<iostream>
using namespace std;
class Copyc
{
	int num;
	public:
	Copyc(int a)
	{
		num = a;
		cout << "This is constructor\n";
	}
	Copyc(Copyc &obj)
	{
		num = obj.num;
		cout << num;
		cout << "This is copyc\n";
	}
};
int main()
{
	Copyc c(23);
	Copyc cc(c);
}
