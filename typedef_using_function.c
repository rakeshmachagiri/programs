#include<stdio.h>
void stf();
typedef struct name 
	{
		int aum;
		char gum[10];
	}www;
	www person;
	
main()
{
	stf();
	james();
	kar();
}
void stf()
	{   
		person.aum=10;
		strcpy(person.gum,"rakesh");
		printf("%d\t",person.aum);
		printf("%s\n",person.gum);
	}
void james()
	{   
		person.aum=30;
		strcpy(person.gum,"james");
		printf("%d\t",person.aum);
		printf("%s\n",person.gum);
	}
void kar()
	{   
		person.aum=50;
		strcpy(person.gum,"karnakar");
		printf("%d\t",person.aum);
		printf("%s\n",person.gum);
	}		
