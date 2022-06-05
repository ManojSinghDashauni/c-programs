#include<stdio.h>
int fact(int);
void main()
{
    int num,i;
    float sum=0;
    printf("enter the number : ");
    scanf("%d",&num);
    
    for(i=1;i<=num;i++){
        sum+=(float)1/(float)fact(i);
    }
    printf("the sum of the series 1/1! + 1/2! + 1/3! + ..... +1/n! = %.2f",sum);

}

int fact(int num)
{
    int f=1,i=0;
    for(num;num>i;num--){
        f=f*num;
    }
    return f;
}
