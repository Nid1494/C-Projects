#include<stdio.h>
void display(int n,char a[10],int b ,char c[10],int d,long long int e,float f);
struct Employee
{
	char emp_name[10];
	int emp_id,emp_age;
	long long int emp_phone_number;
	char emp_department[10];
	float emp_salary;
};
void main()
{
	int n,i;
	struct Employee emp[20];
	printf("Enter number of Employee : ");
	scanf("%d",&n);
	printf("\n \t Employee Details \n");
	printf("\n Enter Employee's Name ,Age, Employee number, Department Name, Contact details, Salary: \n");
	for(i=0;i<n;i++)
	{
		scanf("%s %d %d %s %lld %f",emp[i].emp_name,&emp[i].emp_age,&emp[i].emp_id,emp[i].emp_department,&emp[i].emp_phone_number,&emp[i].emp_salary);
	}
	printf("\n Name   Age  Department  ID    Mobile No.      Salary  \n ");
	for(i=0;i<n;i++)
	{
		display(n,emp[i].emp_name,emp[i].emp_age,emp[i].emp_department,emp[i].emp_id,emp[i].emp_phone_number,emp[i].emp_salary);
	}
}
void display(int n,char a[10],int b ,char c[10],int d,long long int e,float f)
{
	printf("\n %s\t%d\t%s\t %d\t%lld\t%f",a,b,c,d,e,f);
}

