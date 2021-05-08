//Program to swap two numbers
#include<stdio.h>
main()
{
	int a,b;
	printf("Enter two numbers: ");
	scanf("%d",&a);
	scanf("%d",&b);
	printf("\n Before swapping a= %d and b= %d",a,b);
	a+=b;  //Adds value of a and b and then stored in a
	b=a-b;
	a-=b;  //Value of b is subtracted from a and then stored in a
	printf("\n After swapping a= %d and b= %d",a,b);
	return 0;
}
