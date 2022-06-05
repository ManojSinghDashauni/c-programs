#include<stdio.h>
float area_of_circle(float x);
void
main ()
{
    float area,radius;
    printf("enter the radius : ");
    scanf("%f",&radius);

    area=area_of_circle(radius);
    printf("the larger num is %.2f",area);

}

float area_of_circle(float r)
{
    return (3.14*r*r);
}
