//NAME-MANOJ SINGH DASHAUNI
//ROLL NO-12
//COURSE-BCA
//SECTION-F

/*
PROBLEM STATEMENT
WAP to determine leap year or not using Logical AND, OR operators and conditional statements.
*/

#include<stdio.h>
void main()
{
int year;
printf("\n Enter any year: ");
scanf("%d",&year);
if((year%4 == 0) && ((year%100 != 0)) || (year%400 == 0))
printf("\n%d  Leap Year",year);
else
printf("\n Not a Leap Year");
}

/*
OUTPUT
Enter any year: 2004

2004  Leap Year
*/  