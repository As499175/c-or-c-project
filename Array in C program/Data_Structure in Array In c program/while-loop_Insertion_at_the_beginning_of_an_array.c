#include <stdio.h>
#include <stdlib.h>

// Insertion at the beginning of an array
// Using in while loop

#define MAX 5

int main()
{
    int array[MAX] = {2, 3, 5, 8};
    int N = 4;
    int j = 0;
    printf("print the all element of an array :\n");
    while (j < N)
    {
        /* code */
        printf("array[%d] = %d \n", j, array[j]);
        j++;
    }
    printf("\n");
    printf("\n");
    if (MAX == N)
    {
        /* code */
        printf("The Array is full ..that's why we can't  store any element of this array.\n");
    }
    else if (MAX != N)
    {
        /* code */
        printf("insertion at the beginning of an array : \n");
        printf("\n");
        j = N;
        while (j >= 0)
        {
            /* code */
            array[j + 1] = array[j];
            j--;
        }
        int new_value = 334;
        array[0] = new_value;
        N++;
        j=0;
        while (j < N)
        {
            /* code */
            printf("array[%d] = %d \n", j, array[j]);
            j++;
        }
    }
    printf("\n");
    printf("\n");
    system("pause");
    return 0;
}