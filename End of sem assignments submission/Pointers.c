#include<stdio.h>
int main ()
{
	int *p;
	int y=5;
	p=&y;
	printf("%p\t%p\t%d",p,&y,*p);
	return 0;
}
