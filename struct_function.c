#include<stdio.h>
struct student 
{
	char name[10];
	int age;
	float percentage;
	
}s1;
void fun1()
{
	printf("%s   %d   %f\n",s1.name,s1.age,s1.percentage);
	
}
void fun2()
{
	
	//struct student s2={"james",50,15.5};
	printf("%s   %d   %f",s1.name,s1.age,s1.percentage);
	
}
main()
{
	  fun1();
	  fun2();
}

