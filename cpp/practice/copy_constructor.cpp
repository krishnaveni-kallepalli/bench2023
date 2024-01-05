#include<iostream>
using namespace std;
class CC
{
	public:
	CC(){cout << "Constructor\n";}
	CC(const CC &obj)
	{
		cout << "copy constructor\n";
 	}
};
int main()
{
	CC c;
	CC x(c);
}



