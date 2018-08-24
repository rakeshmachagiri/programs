#include<stdio.h>
main()
{
	struct emp
	{
		char name[10];
		int age;
		struct date
		{
		int day;
		int month;
		int year;
	    }birthdate;
	    struct j_date
	    {
	    	int day;
	    	int month;
	    	int year;
	    	
		}joindate;
	};
	struct emp s1={"rakesh",25,{19,4,1994},{1,4,1996}};
	
	printf("%s  %d\nbirthdate  %d  %d  %d\njoindate %d  %d  %d",s1.name,s1.age,s1.birthdate.day,s1.birthdate.month,s1.birthdate.year,s1.joindate.day,s1.joindate.month,s1.joindate.year);
}
