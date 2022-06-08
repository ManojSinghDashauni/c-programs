
#include <stdio.h>

int main()
{
    int n,i=1,s=0,m;
    printf("enter any  number");
    scanf("%d",&n);
    abc:
    if(n%i==0){
        s+=i; //s=s+i
    }
    i++;
    
    if(i<=n/2){
        goto abc;
    }
    
    if(n==s){
        printf("perfect");
    }
    else{
        printf("not perfect");
    }
    return 0;
}
