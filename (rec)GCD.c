#include<stdio.h>
int gcd(int,int);

void main()
{
    int x,y,result;
    printf("enter the number x and y : ");
    scanf("%d %d",&x,&y);
    result=gcd(x,y);
    printf("gcd of %d and %d is %d",x,y,result);
}
int gcd(int x,int y)
{
    int rem;
    rem=x%y;
    if(rem==0)
    {
        return y;
    }
    else
    {
        return (gcd(y,rem));
    }
}