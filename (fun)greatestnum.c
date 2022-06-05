#include<stdio.h>
int bignum(int a,int b,int c);
void
main ()
{
  int num1,num2,num3,large;
    printf("enter the number : ");
    scanf("%d",&num1);
    printf("enter the number : ");
    scanf("%d",&num2);
    printf("enter the number : ");
    scanf("%d",&num3);
    
    large=bignum(num1,num2,num3);
    printf("the larger num is %d",large);

}

int bignum(int x,int y,int z)
{
    if(x>y && x>z){
        return x;
    }
    else if(y>z && y>x){
        return y;
    }
    else{
        return z;
    }
}
