//NAME-MANOJ SINGH DASHAUNI
//ROLL NO-12
//COURSE-BCA
//SECTION-F

/*
PROBLEM STATEMENT
WAP to exchange two numbers using a temporary variable and without.
*/

#include<stdio.h>
void main(){
  int a,b,c;
  printf("enter the value of a\n");
  scanf("%d",&a);
  printf("enter the value of b\n");
  scanf("%d",&b);
  c=a;
  a=b;
  b=c;
  printf("the value of a- %d\n",a);
  printf("the value of a- %d\n",b);
}

/*
OUTPUT
enter the value of a
10
enter the value of b
20
the value of a- 20
the value of a- 10 
*/

/*
PROBLEM STATEMENT
WAP to exchange two numbers using a without temporary variable.
*/

#include<stdio.h>
void main(){
  int a,b;
  printf("enter the value of a\n");
  scanf("%d",&a);
  printf("enter the value of b\n");
  scanf("%d",&b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("the value of a- %d\n",a);
  printf("the value of a- %d\n",b);
}

/*
OUTPUT
enter the value of a
40
enter the value of b
80
the value of a- 80
the value of b- 40 
*/


  	
