#include <stdio.h>
#include <math.h>

int main()
{
    int num=0,arr[10],numofdigits,i;
    
    printf("\nenter the num of element :");
    scanf("%d",&numofdigits);
    
    for(i=0;i<numofdigits;i++)
    {
        printf("\nenter the %dth digit :",i);
        scanf("%d",&arr[i]);
    }
    
    i=0;
    while(i<numofdigits)
    {
        num=num+arr[i]*pow(10,i);
        i++;
    }
    
    printf("\nthe num is: %d",num);
    return 0;
}