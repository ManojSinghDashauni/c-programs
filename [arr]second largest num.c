#include <stdio.h>

int main()
{
    int i,n,arr[20];
    int large, second_large,pos;
    
    printf("\nenter the num of element :");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        printf("\nenter the value of element %d:",i);
        scanf("%d",&arr[i]);
    }
    
    large=arr[0];
    pos=0;
    
    for(i=1;i<n;i++)
    {
        if(arr[i]>large)
        {
            large=arr[i];
            pos=i;
        }
    }
    
    second_large=arr[n-pos-1];
    for(i=0;i<n;i++)
    {
        if(i!=pos)
        {
            if(arr[i]>second_large)
            {
                second_large=arr[i];
            }
        }
    }
    printf("\nthe num you enterd are :");
    for(i=0;i<n;i++)
    {
        printf("\n%d",arr[i]);
    }
    printf("\nthe largest of these num is: %d:",large);
    printf("\nthe second largest of these num is: %d:",second_large);
    return 0;
}