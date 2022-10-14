#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
  printf("\nEnter Num 1: \n");
  scanf("%d",&a);
  printf("\nEnter Num 2: \n");
  scanf("%d",&b);

   printf("\nBefore swapping value of Num 1 is: %d", a);
   printf("\nBefore swapping value of Num 2 is: %d", b);
    a=a+b;

    b=a-b;

    a=a-b;

printf("\nAfter swapping value of Num 1 is: %d", a);
   printf("\nAfter swapping value of Num 2 is: %d", b);
    getch();



    return 0;
}
