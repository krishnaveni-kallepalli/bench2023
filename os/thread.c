#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
enum threads
{
	EVEN=1,
	ODD,
	CHK_NUM
};
void *even(void *arg)
{
	int *ptr;
	ptr = arg;
	
	if(*ptr%2 == 0)
		printf("%d is even\n",*ptr);

}
void *odd(void *arg)
{
	int *ptr;
	ptr = arg;
	
	if(*ptr%2 != 0)
		printf("%d is odd\n",*ptr);
}
void *chk_num(void *arg)
{
	int *ptr;
	ptr = arg;
	
	if(*ptr > 0)
		printf("%d is positive\n",*ptr);
	else 
		printf("%d is negative\n",*ptr);
}
int main()
{
	int num;
	pthread_t t[3];
	
	printf("Enter num:");
	scanf("%d",&num);
	enum threads th;
	printf("1.EVEN\n2.ODD\n3.CHECK NUMBER\nEnter choice:\n");
	scanf("%d",&th);
	switch(th)
	{
		case EVEN:
		pthread_create(&t[0],NULL,&even,&num);
		pthread_join(t[0],NULL);
		break;
		
		case ODD:
		pthread_create(&t[1],NULL,&odd,&num);
		pthread_join(t[1],NULL);
		break;
		
		case CHK_NUM:
		pthread_create(&t[2],NULL,&chk_num,&num);
		pthread_join(t[2],NULL);
		break;
		
		default:
		printf("Invalid\n");
		exit(0);
	}
	
	

	
	return 0;
}
