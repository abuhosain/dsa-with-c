//data insertion in a array
#include <stdio.h>
int main()
{
    int array[100], n, p, new, i;

    printf("Array lenght:\n");
    scanf("%d", &n); //array lenght is taken

    printf("Array:\n");

    for( i=0; i<n; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Position for inserting new data:\n");
    scanf("%d", &p);  //position is taken

    printf("Data to be entered:\n");
    scanf("%d", &new);
    for( i = n-1; i>= p-1; i--)
    {
        array[i+1] = array[i];
    }

    array[p-1] = new;
    n=n+1;

    printf("new array:\n");

    for( i = 0; i<n; i++)
    {
        printf("%d\n",array[i]);
    }
    return 0;
}
