#include <stdio.h>
#include <math.h>

int main()
{
    int n,arr[10],i,j,flag=0;
    
    printf("\nenter the size of array :");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        printf("\nenter the elements :");
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j] && i!=j)
            {
                flag=1;
                printf("\nduplicate num found at location %d and %d",i,j);
            }
        }
    }
    if(flag==0)
    {
        printf("\nno duplicate num");
    }
    return 0;
}