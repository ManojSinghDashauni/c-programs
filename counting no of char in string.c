#include<stdio.h>
#include<string.h>

int main(){
    int n,c;
    char line[100];
    n = 0;
    while((c=getchar()) != '\n'){
        if(n < 100)
        line[n]=c;
        n++;
    }
        line[n]='\0';
        printf("length = %d\n",n);
    return 0;
}