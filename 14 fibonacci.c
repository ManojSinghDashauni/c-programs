//NAME-MANOJ SINGH DASHAUNI
//ROLL NO-12
//COURSE-BCA
//SECTION-F

/*
PROBLEM STATEMENT
WAP to generate fibonacci series? (1,1,2,3,5,8,13,21………….)
*/

#include<stdio.h>
#include<math.h>
void main(){
    
    int n1=0,n2=1,n3=0,num,i; 
    
    printf("Enter the number of elements:- ");
    scanf("%d",&num);
    printf("\n%d %d",n1,n2);
    
    for(i=2;i<num;++i){
        n3=n1+n2;
        printf(" %d",n3);    
        n1=n2;    
        n2=n3;    
    }
}


/*
OUTPUT
Enter the number of elements:- 11

0 1 1 2 3 5 8 13 21 34 55
*/