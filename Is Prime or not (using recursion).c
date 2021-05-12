#include<stdio.h>
#include<conio.h>
void isprime(int,int);
void main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	if(num==1)
	{
		printf("\n %d is not a prime number",num);
	}
	else
	{
		isprime(num,num/2);
	}
}
void isprime(int num,int i)
{
	int prime,a;
	a=num;
	if(i==1)
	{
		printf("%d is a prime number",a);
	}
	else
	{
		if(num%i==0)
		{
			printf("%d is not a prime number",a);
		}
     	else
	    {
		    i=i-1;
		    isprime(num,i);
    	}
    }
}
