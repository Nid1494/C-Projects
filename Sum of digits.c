#include<stdio.h>
void sod(int ,int);
void main()
{
	int num,sum=0;
	printf("Enter the number: ");
	scanf("%d",&num);
    printf("Sum of digits in %d = ",num);
    sod(num,sum);
}
void sod(int num, int sum)
{
	int i,j,n;
	i=num/10;
	j=num%10;
	sum=sum+j;
	if(i!=0)
	{
		sod(i,sum);
	}
	else
	{
	  printf("%d",sum);
	}
}
