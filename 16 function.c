//NAME-MANOJ SINGH DASHAUNI
//ROLL NO-12
//COURSE-BCA
//SECTION-F

/*
PROBLEM STATEMENT
Write a menu driven program  using functions to find?
A) Factorial of a number,
B) Reverse of a number,
C) factor of a number.                                                                
*/

#include <stdio.h>
void factorial(int n);
void reverse(int num);
void factor(int fact);
int main()
{
    int n,num,fact;
    printf("enter the number: ");
    scanf("%d",&n);
	factorial(n);
	
	printf("\n\nenter the number: ");
    scanf("%d",&num);
	reverse(num);
	
	printf("\n\nenter the number: ");
    scanf("%d",&fact);
    printf("\nthe factor is :");
	factor(fact);
}

void factorial(int n){
    int factorial=1,num=n;
    if(num==0){
      factorial=1;
      }
    else{
      for(int i=1;i<=num;i++){
          factorial=factorial*i;
      }
      printf("\nfactorial of %d is %d",num,factorial);
  }
}

void reverse(int num){
    int r,sum=0;
    while(num!=0){
        r=num%10;
        sum=sum*10+r;
        num/=10;
    }
    printf("the reverse is %d",sum);
}

void factor(int fact){
    for(int i=1; i<=fact/2;i++){
        if(fact%i==0){
           printf("%d ",i);
        }
    }
}
/*
OUTPUT
enter the number: 5

factorial of 5 is 120

enter the number: 123
the reverse is 321

enter the number: 60

the factor is :1 2 3 4 5 6 10 12 15 20 30 
*/ 