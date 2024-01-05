#include<iostream>
using namespace std;
class sms
{
	static int i;
	public:
	static int j;
	
	sms()
	{
		i=20;
		j=30;
	}
	static int fun()
	{
		return i;
	}
};
int sms::i=45;
int sms::j=89;
int main()
{
	class sms s;
	int x = sms :: fun();
	cout << x << endl;
	cout << s.j << endl;
}
