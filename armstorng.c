#include<stdio.h>
#include<math.h>
void main()
{
	int num,r,m,sum=0;

	printf("enter the num\n");
	scanf("%d",&num);
	m=num;

	while(num!=0){
		r=num%10;
		sum=sum+pow(r,3);
		num=num/10;
	}
	printf("%d\n",sum);
	if(m==sum){
		printf("armstrong");
	}
	else{
		printf("not armstrong");
	}
}

