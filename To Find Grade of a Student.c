#include<stdio.h>
main()
{
	int marks;
	printf("Enter Marks of the student (From 0-100): ");
	scanf("%d",&marks);
	if(marks>=85 && marks<=100)
	{
		printf("\n The student got Grade A");
	}
	else
	    if(marks>=70 && marks<85)
	    {
	    	printf("\n The student got Grade B");
		}
		else
		     if(marks>=55 && marks<70)
		     {
		     	printf("\n The student got grade C");
			 }
			 else
			      if(marks>=40 && marks<55)
			      {
			      	printf("\n The student got Grade D");
				  }
				  else
				      printf("\n The student got Grade F");
return 0;				  
}
