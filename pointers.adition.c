#include<stdio.h>
main()
{
	int a=1,b=2;
	int *ptr,*ptr1;
	ptr=&a;
	ptr1=&b;
	
	printf("%d",*ptr+*ptr1);
}
