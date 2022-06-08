#include<stdio.h>
#include<math.h>
void main(){
    int num,renainder,binary=0,i=0;
    printf("enter decimal num = ");
    scanf("%d",&num);
    
    while(num!=0){
        renainder=num%2;
        binary=binary+renainder*pow(10,i);
        
        num=num/2;
        i++;
    }
    printf("\nthe binary num = %d",binary);
}