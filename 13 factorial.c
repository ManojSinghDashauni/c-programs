//NAME-MANOJ SINGH DASHAUNI
//ROLL NO-12
//COURSE-BCA
//SECTION-F

/*
PROBLEM STATEMENT
WAP to find the factorial of a number?
*/

#include<stdio.h>
void main(){
  int factorial=1,num;
  printf("\nenter the num: ");
  scanf("%d",&num);
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

/*
OUTPUT
enter the num: 10

factorial of 10 is 3628800
*/  	

