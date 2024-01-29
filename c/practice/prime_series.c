#include<stdio.h>

int main()
{
	int range,i,j,count;
	printf("Enter Range:");
	scanf("%d",&range);

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
