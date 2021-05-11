#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	printf("Enter any number from 0 to 5 : ");
	scanf("%d",&a);
	switch(a)
	{
		case 1: printf("\n Food Item- Pizza \n Prize- Rs.175 ");
		        break;
		case 2: printf("\n Food Item- Sandwich \n Prize- Rs.150");
		        break;        
	    case 3: printf("\n Food Item- French Fries \n Prize- Rs.89");
	            break;
	    case 4: printf("\n Food Item- Burger \n Prize- Rs.135");
		        break;
		case 5: printf("\n Food Item- Croissants \n Prize- Rs.110");
		        break;
		default: printf("\n Entered Number doesn''t belong to the list");
		         break;				        
	}
	getch();
}
