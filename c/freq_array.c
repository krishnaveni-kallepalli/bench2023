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
		for(j=i+1;j<n;j++)
		{
			if(a[i] == a[j])
			{
				count ++ ;
				f[j] = temp;
			}
		}
		if(f[i] !=temp)
			f[i] = count;
	}
	
	printf("Frequency of each element:\n");
	for(int i=0;i<n;i++)
	{
		if(f[i] != temp)
			printf("%d : %d\n",a[i],f[i]);
	}
	return 0;
}
// WASTe
//^oA&SvE8$kR*Jy
