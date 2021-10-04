/*  program of convert decimal value in binary  */


//  -------------------   EASY METHOD   ------------------  //
#include <stdio.h>
#include <conio.h>
void main()
{
    int arr[15], i = 0, num, rem;
    printf("enter the number to convert in binary\n");
    scanf("%d", &num);

    // after divide by 2 binary will store in rem
    // and num will update
    // when number be 0 (num!=0) that mean all convert in binary
    while (num != 0)
    {
        rem = num % 2;
        num = num / 2;
        arr[i] = rem;
        i++;
    }

    // after end loop i is the index ,which is next from arry element stored
    // so we print reverse array
    // and j start from i-1 coz value in array filled till i-1
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", arr[j]);
    }
}

/*

//  -------------------   DYNAMICALLY ALLOCATED METHOD   ------------------  //
#include <stdio.h>
#include <stdlib.h>
void main()
{
    int i = 0, num, n, size = 0;
    printf("enter the number to convert in binary\n");
    scanf("%d", &num);
    n = num;

    // we store the size for dynamic allocation
    while (n != 0)
    {
        n = n / 2;
        size++;
    }

    // after loop we at the next index where value will be stored
    // so decrease 1 times to size -&- declare an dynamic array
    size--;
    int *arr = (int *)malloc(size * sizeof(int));

    // we know the size af array so
    // we start fill value from last so we dont need to reverse array
    for (i = size; i >= 0; i--)
    {
        *(arr + i) = (num % 2);
        num = num / 2;
    }

    // print array to covert in binary
    for (i = 0; i <= size; i++)
    {
        printf("%d", *(arr + i));
    }
}

*/
