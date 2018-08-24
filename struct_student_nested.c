#include<stdio.h>
main()
{
	struct student 
	{
		char name[10];
		int age;
		int clas;
		struct date
		{
			int day;
			int month;
			int year;
		}bd;
		struct join
		{
			int day;
			int month;
			int year;
		}jb;
	};
	struct student s1={"rakesh",15,10,{19, 6 ,1995},{1, 5, 2000}  };
	struct student s2={"james",16,8,{12, 5, 1996},{1, 5, 2002}  };
	struct student s3={"karnakar",16,9,{5, 4, 1992},{6, 6, 2003}  };
	struct student s4={"harish",15,8,{17, 4, 1995},{3, 5, 2000}  };
	struct student s5={"ram",16,10,{15, 2, 1995},{1, 5, 2006}  };
	struct student s6={"rak",16,10,{19, 5, 1995},{9, 5, 2000}  };
	struct student s7={"rajesh",14,9,{19, 8, 1995},{2, 5, 2003}  };
	struct student s8={"rakesh",20,8,{15, 6, 1996},{1, 4, 2000}  };
	printf("name    age   class   dob        join_date\n");
	printf("%s   %d   %d     %d-%d-%d   %d-%d-%d\n",s1.name,s1.age,s1.clas,s1.bd.day,
	s1.bd.month,s1.bd.year,s1.jb.day,s1.jb.month,s1.jb.year);
	printf("%s   %d   %d     %d-%d-%d   %d-%d-%d\n",s2.name,s2.age,s2.clas,s2.bd.day,
	s2.bd.month,s2.bd.year,s2.jb.day,s2.jb.month,s2.jb.year);
	printf("%s   %d   %d     %d-%d-%d   %d-%d-%d\n",s3.name,s3.age,s3.clas,s3.bd.day,
	s3.bd.month,s3.bd.year,s3.jb.day,s3.jb.month,s3.jb.year);
	printf("%s   %d   %d     %d-%d-%d   %d-%d-%d\n",s1.name,s4.age,s4.clas,s4.bd.day,
	s4.bd.month,s4.bd.year,s4.jb.day,s4.jb.month,s4.jb.year);
	printf("%s   %d   %d     %d-%d-%d   %d-%d-%d\n",s5.name,s5.age,s5.clas,s5.bd.day,
	s5.bd.month,s5.bd.year,s5.jb.day,s5.jb.month,s5.jb.year);
	printf("%s   %d   %d     %d-%d-%d   %d-%d-%d\n",s6.name,s6.age,s6.clas,s6.bd.day,
	s6.bd.month,s6.bd.year,s6.jb.day,s6.jb.month,s6.jb.year);
	printf("%s   %d   %d     %d-%d-%d   %d-%d-%d\n",s7.name,s7.age,s7.clas,s7.bd.day,
	s7.bd.month,s7.bd.year,s7.jb.day,s7.jb.month,s7.jb.year);
	printf("%s   %d   %d     %d-%d-%d   %d-%d-%d\n",s8.name,s8.age,s8.clas,s8.bd.day,
	s8.bd.month,s8.bd.year,s8.jb.day,s8.jb.month,s8.jb.year);
	
}
