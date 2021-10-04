/*  program of array of 10 elements
      and find the key value and show
      the index of that value  */

#include <stdio.h>
#include <conio.h>
void main()
{
  int arr[10], i, num;
  printf("enter the 10 number of array\n");
  for (i = 0; i < 10; i++)
  {
    scanf("%d", &arr[i]);
  }

  // get number to check it exist in array or not
  printf("enter the number to search and get index\n");
  scanf("%d", &num);

  // run loop untill not get value
  for (i = 0; i < 10; i++)
  {
    if (arr[i] == num)
    {
      printf("value %d is exist at index %d", num, i);
    }
  }

  // loop end so value of i is 10 that means
  // number not exist
  if (i > 9) // i is 10
  {
    printf("value %d is not exist in array", num);
  }
}