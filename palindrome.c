#include<stdio.h>
void
main ()
{
  int num, remainder,swap, v = 0;
  printf ("enter the any num");
  scanf ("%d", &num);
  swap = num;
  while (num > 0)
    {
      remainder = num % 10;
      num /= 10;
      v= v*10 + remainder;
    }
  printf ("%d \n", v);
  if (v == swap)
    {
      printf ("this is an palindrome");
    }
  else
    {
      printf ("this is not an palindrome");
    }
}
