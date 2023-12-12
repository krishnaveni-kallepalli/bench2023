#include<stdio.h>
int main()
{
	int a[10],n,count =0,i;
	printf("Enter size:");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(a[i]!=0)
			printf("%d ",a[i]);
		else count ++;
		while(count!=0)
		{
			a[n-1] = 0;
			n--;
		}
		printf("%d",a[i]);
	}
	printf("\ncount:%d\n",count);



}
