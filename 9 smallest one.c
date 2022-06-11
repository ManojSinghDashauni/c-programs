//NAME-MANOJ SINGH DASHAUNI
//ROLL NO-12
//COURSE-BCA
//SECTION-F

/*
PROBLEM STATEMENT
WAP to find the average of top three test results out of four conducted. (eliminate the smallest one).
*/

#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,d,small,sum=0,average;
     printf("enter any 4 number\n");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    small=(a<b&&a<c&&a<d)?(a):((b<c&&b<d))?(b):(((c<d)?(c):(d)));
    printf("%d is the smallest no.\n",small);
    sum=a+b+c+d-small;
    printf("sum of marks is %d\n",sum);
    average=sum/3;
    printf("%d is your average marks of top three subjects",average);
    return 0;
}

/*
OUTPUT
enter any 4 number
1
2
3
4
1 is the smallest no.
sum of marks is 9
3 is your average marks of top three subjects
*/
