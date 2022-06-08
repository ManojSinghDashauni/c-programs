#include<stdio.h>
void
main ()
{
  int num, remainder,swap, sum = 0;
  printf ("enter the any num");
  scanf ("%d", &num);
  swap = num;
  while (num > 0)
    {
      remainder = num % 10;
      num /= 10;
      sum += remainder * remainder * remainder;
    }
  printf ("%d \n", sum);
  if (sum == swap)
    {
      printf ("this is an armstrong");
    }
  else
    {
      printf ("this is not an armstrong");
    }
}
