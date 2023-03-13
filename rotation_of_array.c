#include <stdio.h>
int main()
{
    int a[100], size, i, first;
    printf("Enter the size:");
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        printf("\nEnter the element:");
        scanf("%d", &a[i]);
    }
    printf("\nArray elements are:");
    for (i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    first = a[0];
    for (i = 0; i < (size - 1); i++)
    {
        a[i] = a[i + 1];
    }
    a[size - 1] = first;
    printf("\nArray after one rotation:");
    for (i = 0; i < size; i++)
    {
       printf("%d ",a[i]);
    }
     return 0;
}