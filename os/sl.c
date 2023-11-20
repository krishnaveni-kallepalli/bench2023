#include<stdio.h>
int main()
{
	int a[5]={1,2,3,4,5};
	int fl,sl,i,n=5;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	fl = a[0];
	sl = a[1];
	
	if(fl < sl)
	{
		fl = a[1];
		sl = a[0];
	}
	for(i=2;i<n;i++)
	{
		if(a[i] > fl)
		{
			sl = fl;
			fl = a[i];
		}
	}
	printf("sl:%d\n",sl);
}
