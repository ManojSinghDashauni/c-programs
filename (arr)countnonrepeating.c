#include<stdio.h>
int non_repeating(int array[],int len);

int main()
{
    int array[]={2,3,6,7,3,7,9,6,4,2};
    int count=non_repeating(array,10);
    printf("count %d\n",count);
    return 0;
}

int non_repeating(int array[],int len)
{
    int i=0,j=0,count=0;
    for(i=0;i<len;i++)
    {
        for(j=0;j<len;j++)
            if(array[i]==array[j]&& i!=j)
            break;
            if(j==len)
            count++;
    }
    return count;
}