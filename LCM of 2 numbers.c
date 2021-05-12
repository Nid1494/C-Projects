#include<stdio.h>
int LCM=1;
void lcm(int,int);
void main()
{
	int num1,num2;
	printf("Enter two numbers whose LCM has to be found: ");
	scanf("%d %d",&num1,&num2);
	lcm(num1,num2);
}
void lcm(int num1,int num2)
{
	if(LCM%num1==0 && LCM%num2==0)
	{
		printf("LCM of %d and %d is = %d",num1,num2,LCM);
	}
	else
	{
		LCM+=1;
		lcm(num1,num2);
	}
}
