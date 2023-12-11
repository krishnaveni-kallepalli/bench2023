#include<stdio.h>
int main()
{
	int size =10;
	int a[10],f[10],i,j,count,len,n,temp=-1	,k;
	printf("Enter no.of elements in array:");
	scanf("%d",&n);
	printf("Enter elements into array:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	
	for(i=0;i<n;i++)
	{
		count = 1;
		for(j=i+1;j<n;j++)
		{
			if(a[i] == a[j])
			{
				count ++ ;
				for(k=j;k<n;k++)
				{
					a[k] = a[k+1];
				}
				a[n] = 0;
				n--;
			}
		}
		//printf("%d:%d\n",a[i],count);
		count = 0;
	
		printf("Elements:\n");
		for(k=0;k<n;k++)
			printf("%d\n",a[i]);
	}
	return 0;
}

