#include<iostream>
using namespace std;
class Private
{
	int x=25;
	Private()
	{
		cout << x << endl;
	}
	public:// public static function to create instance
	static Private constructor()
	{
		Private();
	}
};
int main()
{
	Private obj = Private :: constructor();
}
