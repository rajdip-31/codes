#include <stdio.h>
int main()
{
    int n, i,j;
    printf("Enter the value of N:");
    scanf("%d", &n);
    for(i=1;i<n;i++)
    {
        printf("\n");
        for(j=0;j<i;j++)
        {
            printf("* ");
        }
    }
    for(i=(n-1);i>0;i--)
    {
        printf("\n");
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
    }
    return 0;
   
}


