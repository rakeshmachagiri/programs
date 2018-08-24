#include<stdio.h>
#include<string.h>

typedef struct det
{
	int age;
	char name[10];
}details;
details ant;

void fun(details *ptr)
{
	ptr->age=10;
	strcpy(ptr->name,"rakesh");
	printf("%d\n",ptr->age);
	printf("%s",ptr->name);
}
main()
{
	 
	fun(&ant);
}
