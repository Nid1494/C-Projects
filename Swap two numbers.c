#include<stdio.h>
main()

{
	int a,b;
	printf("Enter two numbers: ");
	scanf("%d",&a);
	scanf("%d",&b);
	printf("\n Before swapping a= %d and b= %d",a,b);
	a+=b;
	b=a-b;
	a-=b;
	printf("\n After swapping a= %d and b= %d",a,b);
	return 0;
}
