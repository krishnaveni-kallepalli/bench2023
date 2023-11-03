#include<iostream>
using namespace std;
class binary
{
	private:
	string s;
	public:
		void read();
		void chk_bin();
};
void binary :: read()
{
	cin  >> s;
}
void binary :: chk_bin()
{
	int i;
	for(i=0;i<s.length();i++)
	{
		if(s.at(i)!='0' && s.at(i)!='1')
		{
			cout << "Incorrect\n";
			exit(0);
		}
	}
	cout << s << endl;
}
int main()
{
	class binary b;
	b.read();
	b.chk_bin();
	return 0;
}
