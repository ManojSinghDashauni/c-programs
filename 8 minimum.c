//NAME-MANOJ SINGH DASHAUNI
//ROLL NO-12
//COURSE-BCA
//SECTION-F

/*
PROBLEM STATEMENT
WAP to find minimum of three numbers:
a) Using if else
b) Using conditional/ternary operator
c) Using arithmetic operation (subtraction)
*/

#include <stdio.h>
void main()
{
    int a=1,b=2,c=3;
    if(a<b && b<c){
        printf("%d is minimum",a);
    }
    else if(b<c && c<a){
        printf("%d is minimum",b);
    }
    else {
        printf("%d is minimum",c);
    }
}

/*
OUTPfUT
1 is minimum
*/

#include <stdio.h>
void main()
{
    int a=1,b=2,c=3;
    int value=(a<b && b<c)?printf("%d is minimum",a):((b<c && c<a)?printf("%d is minimum",b):printf("%d is minimum",c));
    printf("%d",value);
}

/*
OUTPfUT
1 is minimum
*/
