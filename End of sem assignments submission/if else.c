#include<stdio.h>
int main ()
{
	int marks;
	printf("Enter the student marks\n");
	scanf("%d",& marks);
	if(marks>=40)
	{
		printf("Passed");
	}
	else
    {
        printf("Failed");
    }
	return 0;
}


