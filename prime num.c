#include<stdio.h>
void
main ()
{
  int flag = 0, i, num;
  printf ("\n enter the num");
  scanf ("%d", &num);
  for (i = 2; i < num / 2; i++)
    {
      if (num % i == 0)
	{
	  flag = 1;
	  break;
	}
    }
  if (flag == 1)
    {
      printf ("\n %d is a composite num", num);
    }
  else
    {
      printf ("\n %d is a prime num", num);
    }
}
