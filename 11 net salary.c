//NAME-MANOJ SINGH DASHAUNI
//ROLL NO-12
//COURSE-BCA
//SECTION-F

/*
PROBLEM STATEMENT
WAP to compute net salary ?
(NS=BP+HRA+TA +DA)	
Where BP (Basic pay would be enter by user) 
HRA=10% of BP, 
TA=5%of BP 
DA=15%of BP
*/

#include<stdio.h>
#include<math.h>
void main(){
    int NS,BP,HRA,TA,DA;
    printf("enter the basic pay:- ");
    scanf("%d",&BP);
    HRA=BP*10/100;
    printf("\nHRA = %d",HRA);
    TA=BP*5/100;
    printf("\nTA = %d",TA);
    DA=BP*15/100;
    printf("\nDA = %d\n",DA);
    
    NS=BP+HRA+TA+DA;
    
    printf("\nnet salary = %d",NS);
}


/*
OUTPUT
enter the basic pay:- 27000

HRA = 2700
TA = 1350
DA = 4050

net salary = 35100
*/