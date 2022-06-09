//NAME-MANOJ SINGH DASHAUNI
//ROLL NO-12
//COURSE-BCA
//SECTION-F

/*
PROBLEM STATEMENT
A farmer wants to fence with three rounds of wire in his rectangular plot of length 20 metres and breadth 15 metres.
Calculate the total wire to be purchased. If the cost per metre of wire is 400 rupees, also calculate the total cost of fencing.
*/

#include<stdio.h>
void main(){
  int length=20,breadth=15,wire=3,fence,area,cost;
  area=length*breadth;
  fence=wire*area;
  cost=fence*400;
printf("total cost of fence is - %d rupees \n",cost);
}

/*
OUTPUT
total cost of fence is - 360000 rupees
*/  	
