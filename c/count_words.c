
#include<stdio.h>
#include<stdio.h>

int main()

{

        char str[100];

        int count=0;

        printf("Enter a string :");

        gets(str);



        for(int i=0;str[i];i++)

        {

                if((str[i]!=' ' && str[i+1]==' ')||(str[i]!=' ' && str[i+1] =='\0'))

                {

                        count++;

                }

        }

        printf("words = %d\n",count);



}
