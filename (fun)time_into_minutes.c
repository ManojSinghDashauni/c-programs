#include<stdio.h>
int time_into_minutes(int,int);
void
main ()
{
    int hours,minutes,hourtominut;
    printf("enter the hours : ");
    scanf("%d",&hours);
    
    printf("enter the minutes : ");
    scanf("%d",&minutes);

    hourtominut=time_into_minutes(hours,minutes);
    printf("total minutes is %d",hourtominut);

}

int time_into_minutes(int h,int m)
{
    return (h*60+m);
}
