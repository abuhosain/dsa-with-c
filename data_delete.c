//data deletion in a array
#include <stdio.h>
int main()
{
    int array[100], p, n, i;

    printf("Array lenght:\n");
    scanf("%d", &n);

    printf("Array:\n");
    for( i=0; i<n; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Position from where data to be deleted:\n");
    scanf("%d", &p);

    if (p>n)
    {
        printf("Data deletion is impossible.\n");
    }
    else
    {
        for( i = p-1; i<n-1; i++)
        {
            array[i] = array[i+1];
        }
        n=n-1;
    }
    printf("New array:\n");
    for( i=0; i<n; i++)
    {
        printf("%d\n", array[i]);
    }
    return 0;
}
