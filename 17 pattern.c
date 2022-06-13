//NAME-MANOJ SINGH DASHAUNI
//ROLL NO-12
//COURSE-BCA
//SECTION-F

/*
PROBLEM STATEMENT
WAP to generate following pattern
			ABCDEFGFEDCBA
			ABCDEF FEDCBA
			ABCDE   EDCBA
			ABCD     DCBA
			ABC       CBA
			AB         BA
			A	    A
*/

#include <stdio.h>
int main(){
    int i,j,k,x;
    for(i=0;i<=6;i++)
    {
        printf("\n");
        for(j=65;j<=71-i;j++)
        {
            printf("%c",j);
            
        }
        for(x=1;x<=i*2-1;x++)
        printf(" ");
        for(k=71-i;k>=65;k--)
        {
            if(k==71);
            else
            printf("%c",k);
        }
    }
}

/*
OUTPUT

ABCDEFGFEDCBA
ABCDEF FEDCBA
ABCDE   EDCBA
ABCD     DCBA
ABC       CBA
AB         BA
A           A
*/ 



