//NAME-MANOJ SINGH DASHAUNI
//ROLL NO-12
//COURSE-BCA
//SECTION-F

/*
PROBLEM STATEMENT
WAP to check whether a given number is even or odd.
a) Using if-else
b) Using switch-case
c) Using conditional/ternary operator
*/


#include <stdio.h>
void main()
{
    int num=10;
    if(num%2==0){
        printf("%d is even",num);
    }
    else{
        printf("%d is odd",num);
    }
}

/*
OUTPUT
10 is even
*/


#include <stdio.h>
void main()
{
    int num=11;
    int value=num%2;
    switch(value){
        case 0: printf("%d is even",num);
        break;
        case 1:printf("%d is odd",num);
        break;
        default:printf("enter right value");
    }
}

/*
OUTPUT
11 is odd
*/

#include <stdio.h>
void main()
{
    int num=15;
    int value=(num%2==0)?printf("%d is even",num):printf("%d is odd",num);
}

/*
OUTPUT
15 is odd
*/