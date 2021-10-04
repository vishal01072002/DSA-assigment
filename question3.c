/*  program of print fibonaci series  */

#include <stdio.h>
#include <conio.h>
void main()
{
    int first = 0, second = 1, fib, i, num;
    printf("enter the number to print fibonaci series\n");
    scanf("%d", &num);

    // coz we have base condion 0 and 1 of fibonaci series
    // if num is 1 that mean till first element
    // else we have to print 2 elements of series
    // and further elements print according to loop
    printf("fibonaci series is\n");
    if (num == 1)
    {
        printf("%d ", first);
    }
    printf("%d %d ", first, second);

    // we already print 2 elements so loop start from next that mean -3-
    for (i = 3; i <= num; i++)
    {
        fib = first + second;
        printf("%d ", fib);
        first = second;
        second = fib;
    }
}