#include<stdio.h>

int main()
{
    int row, column,i,j,value;
    int matrix[10][10], transpose[10][10];
    
    printf("\n enter the num of row");
    scanf("%d",&row);
    printf("\n enter the num of column");
    scanf("%d",&column);
    
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("enter value for : %d %d." ,i++ ,j++);
            scanf("%d",&value);
            matrix[i][j];
        }
        printf("\n enter Matrix is as follows:\n");
        for(i=0; i<row;i++)
        {
            for(j=0;j<column;j++)
            {
                printf("%d",matrix[i][j]);
            }
                printf("\n");
        }
        for(i=0; i<row;i++)
        {
            for(j=0;j<column;j++)
            {
                transpose[i][j]=matrix[i][j];
            }
        }
    }
    
    printf("\n transpose of the matrix is as");
    for(i=0; i<column;i++)
    {
            for(j=0;j<row;j++)
            {
                printf("%d",transpose[i][j]);
            }
            printf("\n");
    }
    return 0;
}


