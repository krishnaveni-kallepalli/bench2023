// Online C compiler to run C program online
#include <stdio.h>
#include<math.h>
#include<stdlib.h>
void armstrong(int num,int n)
{
    int sum = 0,rem,x;
    x = num;
    while(num!=0)
    {
        rem = num%10;
		sum = sum +pow(rem, n);
		num = num/10;
    }
    if(sum == x) printf("Arm\n");
    else printf("not\n");
}
int main() {
    int n,num,count=0;
    printf("Enter n digits:");
    scanf("%d",&n);
    
    printf("Enter num:");
    scanf("%d",&num);
    int m = num;
    while(m!=0)
    {
       m=m/10;
       count ++;
    }
   
    if(count == n) armstrong(num,n);
    else printf("Enter correctly\n"),exit(1);
    return 0;
}
