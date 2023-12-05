#include<iostream>
using namespace std;
struct details 
{
	string str; // 32
	char s[5];	// 5
	double i;
	int ii;
};
/*
		32					5+3(s)	8		4+4(s)  = 56
------------------------ -------- -------- -------- 
*/
int main()
{
	struct details dt;
	printf("%d",sizeof(dt));
}

