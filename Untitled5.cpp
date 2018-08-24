#include<stdio.h>
#include<string.h>
void num (struct)
{
struct nam
   {
   
   	int age;
   	char name[10];
   	
	};
	struct nam s1,*ptr;
}

main()
{
   	ptr=&s1;
	int age=10;
	char name[10]="rakesh";
	nam();	
	printf("%d\n",ptr->age);
	puts(ptr->name);
}
