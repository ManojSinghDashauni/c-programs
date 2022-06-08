#include<stdio.h>
#include<math.h>
void main(){
    int num=0,renainder,binary,i=0;
    printf("enter binary num = ");
    scanf("%d",&binary);
    
    while(binary!=0){
        renainder=binary%10;
        num+=renainder*pow(2,i);
        
        binary/=10;
        i++;
    }
    printf("\nthe num = %d",num);
}