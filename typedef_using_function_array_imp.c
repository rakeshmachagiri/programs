#include<stdio.h>
typedef struct info
{
	int age;
	char name[10];
	
}person;
person detail[4];
void bus()
{
	ant();
}
void cat()
{
	bus();
}
void ant()
{
	detail[0].age=20;
	strcpy(detail[0].name,"rakesh");
	    printf("%d\t",detail[0].age);
    	printf("%s\n",detail[0].name);
	detail[1].age=15;
	strcpy(detail[1].name,"rakesh");
	    printf("%d\t",detail[1].age);
		printf("%s\n",detail[1].name);
	detail[2].age=54;
	strcpy(detail[2].name,"rakesh");
	    printf("%d\t",detail[2].age);
		printf("%s\n",detail[2].name);
	detail[3].age=41;
	strcpy(detail[3].name,"rakesh");
	    printf("%d\t",detail[3].age);
		printf("%s\n",detail[3].name);
}
main()
{
	cat();
}
