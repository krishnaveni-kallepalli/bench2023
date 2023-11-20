#include<iostream>
using namespace std;
int main()
{
	int range,i,j,count=0,num,c;
	cout << "Enter range:";
	cin >> range;

	for(i=2;i<=range;i++)
	{
		for(j=2;j<=i;j++)
		{
			if(i%j == 0)
			{
				count = 1;
				break;
			}
		}
		if (count == 0)
			printf("%d\n", i);
	}
}

