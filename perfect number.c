
#include <stdio.h>

int main()
{
    int n,i,s=0,v=1,m;
    printf("enter any  number");
    scanf("%d",&n);
    m=n;
    for(i=1;i<=n/2;i++){
        if(n%i==0){
            s=s+i;
        }
    }
    if(m==s){
        printf("perfect");
    }
    else{
        printf("not perfect");
    }
    return 0;
}
