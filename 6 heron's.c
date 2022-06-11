//NAME-MANOJ SINGH DASHAUNI
//ROLL NO-12
//COURSE-BCA
//SECTION-F

/*
PROBLEM STATEMENT
Area of a valid triangle using Heron's Formula. (Sum of any two sides must be greater than the third side).
*/

#include<stdio.h>
#include<math.h>
void main(){
    float a,b,c,s,area;
    a=13,b=12,c=11;
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("\n area = %f",area);
}


/*
OUTPUT
area = 61.481705
*/  	
