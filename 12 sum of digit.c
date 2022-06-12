//NAME-MANOJ SINGH DASHAUNI
//ROLL NO-12
//COURSE-BCA
//SECTION-F

/*
PROBLEM STATEMENT
WAP to print the sum of digits of any number?                                                                
*/

#include <stdio.h>
int main()
{
	int num,sum=0,x;
	printf("enter the digit: ");
	scanf("%d",&num);
	
	for(int i=0; i<num;i++){
	    printf("\nenter the number: ");
	    scanf("%d",&x);
	    sum=sum+x;
	}
	
	printf("\ntotal sum is : %d\n",sum);
}

/*
OUTPUT
enter the digit: 3

enter the number: 10

enter the number: 20

enter the number: 30

total sum is : 60
*/ 



