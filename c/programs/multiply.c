#include<stdio.h>

void arth(int a,int b)
{	
 int p=0;
	while(b!=0)
    {
        p = p+a;
        b--;
    }
    printf("%d",p);
}
void bitw(int a,int b)
{
	int p=0;
	while(b>0)
	{
		if(b&1)
		{
			p = p + a ;
		}
		a = a << 1;
		b = b << 1;
	}
	printf("%d",p);
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    arth(a,b);
	bitw(a,b);
}



