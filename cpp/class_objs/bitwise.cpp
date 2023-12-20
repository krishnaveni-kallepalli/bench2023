#include<iostream>
#include<stdlib.h>
#define NBITS sizeof(int)
using namespace std;

class Number 
{
	public:
	int x,pos;
	int msb;
	
	Number()
	{
		msb = 1 << (NBITS -1);
		cout << "Enter num:";
		cin >> x;
		
	}
	void check_lsb();
	void check_msb();

};
class Num_pos 
{
	public:
	int x,pos;
	Num_pos()
	{
		cout << "Enter num:";
		cin >> x;
		cout << "Enter POS:";
		cin >> 	pos;
	}
	void set_a_bit();
	void clear_a_bit();
	void toggle_a_bit();
	void get_nth_bit();
};
void Number :: check_lsb() 
{
	if(x&1) cout << "LSB is set\n";
	else cout << "LSB not set\n";
}
void Number :: check_msb() 
{
	Number();
	if(msb&x) cout << "MSB is set\n";
	else cout << "MSB not set\n";
}
void Num_pos :: set_a_bit()
{
	Num_pos();
	x = x|(0x1 << pos);
	cout << x << endl;

}
void Num_pos :: clear_a_bit()
{
	Num_pos();
	x = x&(~(0x1 << pos));
	cout << x << endl;

}
void Num_pos :: toggle_a_bit()
{
	Num_pos();
	x = x|(0x1 << pos);
	cout << x << endl;

}
void Num_pos :: get_nth_bit()
{
	Num_pos();
	x = x >> pos;
	if(x&1) cout << "1\n";
	else cout << "0\n";
}
int main()
{
	class Number n;
	class Num_pos np;
	
	cout << "\n1)check LSB\n2)check MSB\n3)set a bit\n4)clear a bit\n5)toggle a bit\n6)get a bit\n";
	int ch;
	cout << "Enter choice:";
	cin >> ch;
	
	switch(ch)
	{
		case 1:
		n.check_lsb();
		break;
		
		case 2:
		n.check_msb();
		break;
		
		case 3:
		np.set_a_bit();
		break;
		
		case 4:
		np.clear_a_bit();
		break;
		
		case 5:
		np.toggle_a_bit();
		break;
		
		default: cout << "Invalid\n";
		exit(1);
	}
	return 0;
}
