#include<stdio.h>
int main()
{
	int marks;
	printf("please enter the students marks\n");
	scanf("%d",&marks);
	if(marks>40)
	{
		printf("PASSED");
	}
	else
	{
		printf("FAILED");
	}
}
