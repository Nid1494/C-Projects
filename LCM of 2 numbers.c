#include<stdio.h>
int LCM=1;
void lcm(int,int);
void main()
{
	int num1,num2;
	printf("Enter First Number: ");
	scanf("%d",&num1);
	printf("Enter Second Number: ");
	scanf("%d",&num2);
	lcm(num1,num2);
}
void lcm(int num1,int num2)
{
	if(LCM%num1==0 && LCM%num2==0)
	{
		printf("\n LCM of %d and %d is = %d",num1,num2,LCM);
	}
	else
	{
		LCM+=1;
		lcm(num1,num2);
	}
}
