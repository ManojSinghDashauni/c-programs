#include <stdio.h>

int main()
{
    int i,n,arr[20],temp;
    int small, small_pos;
    int large, large_pos;
    
    printf("\nenter the num of element :");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        printf("\nenter the value of element %d:",i);
        scanf("%d",&arr[i]);
    }
    small=arr[0];
    small_pos=0;
    large=arr[0];
    large_pos=0;
    
    for(i=1;i<n;i++)
    {
        if(arr[i]<small)
        {
            small=arr[i];
            small_pos=i;
        }
        if(arr[i]>large)
        {
            large=arr[i];
            large_pos=i;
        }
    }
    printf("\nthe smallest of these num is: %d:",small);
     printf("\nthe position of the smallest of these num in the array is: %d:",small_pos);
    printf("\nthe largest of these num is: %d:",large);
     printf("\nthe position of the largest of these num in the array is: %d:",large_pos);
     
    temp=arr[large_pos];
    arr[large_pos]=arr[small_pos];
    arr[small_pos]=temp;
    
    printf("\nthe new array is :");
    
    for(i=0;i<n;i++)
    {
        printf("\n%d",arr[i]);
    }
    return 0;
}