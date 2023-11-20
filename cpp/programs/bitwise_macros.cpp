#include<iostream>
#include<stdlib.h>
#define NBITS sizeof(int)

#define SET(x,pos) x = x|(0x1 << pos)
#define CLEAR(x,pos) x &= ~(0x1 << pos)
#define TOGGLE(x,pos) x = x^(0x1 << pos)
#define CHKLSB x&1 ? cout << "Set\n" : cout << "Not set\n";
#define CHKMSB(msb)	x & msb ? cout << "Set\n" : cout << "Not set\n";
#define GETABIT(getpos) x & getpos ? cout << "1" : cout << 0;

using namespace std;
int main()
{
	int x,ch,pos,msb,getpos;
	cout << "1)Set a bit\n2)Clear a bit\n3)Toggle a bit\n4)Check LSB\n5)Check MSB\n6)Get a bit\n";
	printf("ENter choice:");
	cin >> ch;
	switch(ch)
	{
		case 1:
		cout << "Enter num,pos:";
		cin >> x >> pos;
		SET(x,pos);
		cout << x << endl;
		break;
		case 2:
		cout << "Enter num,pos:";
		cin >> x >> pos;
		CLEAR(x,pos);
		cout << x << endl;
		break;
		case 3:
		cout << "Enter num,pos:";
		cin >> x >> pos;
		TOGGLE(x,pos);
		cout << x << endl;
		break;
		case 4:
		cout << "Enter num:";
		cin >> x;
		CHKLSB;
		break;
		case 5:
		cout << "Enter num:";
		cin >> x;
		msb = 0x1 << (NBITS - 1); 
		CHKMSB(msb);	
		break;
		case 6:
		cout << "Enter num,pos:";
		cin >> x >> pos;
		getpos = 0x1 << pos;
		GETABIT(getpos);
		break;
		default:
		cout << endl;
		cout << "Enter valid choice\n";
	}
}
