/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num,i;
    printf("enter the num");
    scanf("%d",&num);
    
    for(i=1;i<=num;i++){
        if(num%i==0){
        printf("%d\n",i);
        }
    }

    return 0;
}
