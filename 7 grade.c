//NAME-MANOJ SINGH DASHAUNI
//ROLL NO-12
//COURSE-BCA
//SECTION-F

/*
PROBLEM STATEMENT
WAP that will display the grade of a student provided his/her percentage in 6 subjects according to following criteria:
a) Percentage > 80 then Grade = A
b) Percentage between 61 & 80 then Grade = B
c) Percentage between 51 & 60 then Grade = C
d) Percentage between 41 & 50 then Grade = D
e) Percentage between 35 & 40 then Grade = E
f) Percentage < 35 then Grade = F
*/


#include <stdio.h>
void main()
{
    int maths=55,
        hindi=80,
        english=77,
        science=87,
        programming=98;
        
    int sum=maths+hindi+english+science+programming;
    int Percentage = sum*100/500;
        
    if(Percentage>80){
        printf("Grade A");
    }
    else if(Percentage>61 && Percentage<80){
        printf("Grade B");
    }
    else if(Percentage>51&& Percentage<60){
        printf("Grade C");
    }
    else if(Percentage>41 && Percentage<50){
        printf("Grade D");
    }
    else if(Percentage>35 && Percentage<40){
        printf("Grade E");
    }
    else{
        printf("Grade F");
    }
}

/*
OUTPUT
Grade B
*/