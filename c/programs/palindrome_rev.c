
#include <stdio.h>

int main() 
{
    int num  = 12365,rev,rem,x;
    x = num;
    
    while(num!=0)
    {
        rem = num%10;
        rev = rem+rev*10;
        num = num/10;
    }
    printf("%d",rev);

    if (rev == x) printf(" is palindrome");
    else printf(" is not palindrome");
    return 0;
}
