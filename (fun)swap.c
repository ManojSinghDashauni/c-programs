#include<stdio.h>
void swap(int a,int b);
void main()
{
	int a=2,b=3;
	swap(a,b);
}

void swap(int x,int y)
{
	x=x^y;
	y=x^y;
	x=x^y;
	printf("a=%d b=%d",x,y);
}