#include<stdio.h>
int fact(int);
void main()
{
    int n,r,Combination;
    printf("enter the value of n : ");
    scanf("%d",&n);
    
    printf("enter the value of r : ");
    scanf("%d",&r);

    Combination=fact(n)/(fact(r)*fact(n-r));
    printf("total is %d",Combination);

}

int fact(int num)
{
    int f=1,i=0;
    for(num;num>i;num--){
        f=f*num;
    }
    return f;
}
