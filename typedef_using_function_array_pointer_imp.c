#include<stdio.h>
#include<string.h>
int index;
typedef struct det
{
	int age;
	char name[10];
}details;
details opt[4];
details *ptr;

void fun()
{
	ptr=&opt;
	ptr->age=10;
	strcpy(ptr->name,"rakesh");
	ptr++;
	ptr->age=15;
	strcpy(ptr->name,"rak");
	for(index=0;index<2;index++)
	{
		printf("%d",opt[index].age);
		printf("%s\n",opt[index].name);
	}
	
}
main()
{
	fun();
 }
