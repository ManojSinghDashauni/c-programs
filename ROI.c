#include<stdio.h>
#include<math.h>
void main()
{
	double investment,intrest=12,futre;
	int years,i;

	printf("enter the investment value:\n");
	scanf("%lf",&investment);
	printf("enter the rate of intrest:\n");
	printf("%.2lf\n",intrest);
	printf("enter the num of years for which investment:\n");
	scanf("%d",&years);
	
	printf("years\t value\n");
	printf("____________________\n");

	for(i=1;i<=years;i++)
	{
	    futre=(investment*intrest)/100;
	    investment+=futre;
	    printf("%d\t %.2lf\n",i,investment);
	}
}

