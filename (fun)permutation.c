#include<stdio.h>
int fact(int);
void main()
{
    int n,r,Permutation;
    printf("enter the value of n : ");
    scanf("%d",&n);
    
    printf("enter the value of r : ");
    scanf("%d",&r);

    Permutation=fact(n)/fact(n-r);
    printf("total is %d",Permutation);

}

int fact(int num)
{
    int f=1,i=0;
    for(num;num>i;num--){
        f=f*num;
    }
    return f;
}
