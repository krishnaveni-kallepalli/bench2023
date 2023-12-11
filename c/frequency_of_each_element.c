#include<stdio.h>
int main()
{
	int size =10;
	int a[10],f[10],i,j,count,len,n,temp=-1	;
	printf("Enter no.of elements in array:");
	scanf("%d",&n);
	printf("Enter elements into array:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		count = 1;
		if(a[i]>0)
		{
			for(j=i+1;j<n;j++)
			{
				if(a[i] == a[j])
				{
					count ++;
					a[j] = 0;
				}
			}
			printf("%d:%d\n",a[i],count);
			count = 0;
		}
		
	}
		
	return 0;
}
