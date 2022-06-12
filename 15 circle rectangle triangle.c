//NAME-MANOJ SINGH DASHAUNI
//ROLL NO-12
//COURSE-BCA
//SECTION-F

/*
PROBLEM STATEMENT
Write a menu driven program to find area of
A Circle
B Rectangle
C Triangle                                                                 

*/

#include <stdio.h>
int main()
{
	int r,area1,l,w,area2,b,h,area3;
	printf("Input radious of the circle : ");
	scanf("%d",&r);
	area1=3.14*r*r;
	
	printf("Input length & width : ");
	scanf("%d%d",&l,&w);
	area2=l*w;
	
	printf("Input the base and hight :");
	scanf("%d%d",&b,&h);
	area3=.5*b*h;
	
	printf("\nThe area of circle is : %d\n",area1);
	printf("The area is of Rectangle: %d\n",area2);
	printf("The area is of Triangle: %d\n",area3);
}

/*
OUTPUT
Input radious of the circle : 20
Input length & width : 10 15
Input the base and hight :10 20

The area of circle is : 1256
The area is of Rectangle: 150
The area is of Triangle: 100
*/ 