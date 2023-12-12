#include <stdio.h>

int main()
{
    int a[10],n,i,temp,j;
    printf("Enter n:");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            temp = a[i];
            for(j=i;j<n;j++)
            {
                a[j] = a[j+1];
            }
            a[n-1] = temp;
        }
        if(a[i+1]==0)
        {
        	temp = a[i+1];
            for(j=i+1;j<n;j++)
            {
                a[j] = a[j+1];
            }
            a[n-1] = temp;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}


/*#include <stdio.h>

int main() {
    int a[10], n, i, temp, j;
    printf("Enter n:");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    j = 0; 
    for (i = 0; i < n; i++)
     {
        if (a[i] != 0) {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            j++;
        }
    }

    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
*/
