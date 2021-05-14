#include<stdio.h>
void main()
{
    int arr[3][3],i,j,n,m,sum=0;
    int *ptr;
    printf("Enter number of rows and column: ");
    scanf("%d %d",&n,&m);
    printf("\n Enter the elements of the matrix: ");
    for(i=0;i<n;i++)
    {
    	for(j=0;j<m;j++)
    	{
    		ptr=&arr[i][j];
    		scanf("%d",ptr);
		}
	}
	printf("\n The matrix of order %d x %d is: \n \n",n,m);
    for(i=0;i<n;i++)
	{
        for(j=0;j<m;j++)
        {
        	ptr=&arr[i][j];
            printf("\t %d",*ptr); 
        }
        printf("\n");
    }
    if(n==m)
    {
    	for(i=0;i<n;i++)
    	{
    		for(j=0;j<m;j++)
    		{
    			if(i==j)
    			{
    				ptr=&arr[i][j];
    				sum=sum+*ptr;
				}
			}
		}
		printf("\n The sum of the diagonal elements in the given matrix is = %d",sum);
	}
	else
	{
		printf("\n The given order is not of a Square matrix");
	}	
}
