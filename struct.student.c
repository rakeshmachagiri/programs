#include<stdio.h>
#include<string.h>
main()
{
struct student
{
	char name[10];
	int clas;
	int marks;
	int rank;                                // we can use 2 formats  1.is comented format 
};
//struct student s1,s2,s3;                          //                2.is not comented format
  struct student s1={"ram",5,98,3};
  struct student s2={"shyam",5,89,2};
  struct student s3={"ham",5,100,1};
  

//	strcpy(s1.name,"ram");
//	s1.clas=6;
//	s1.marks=98;
//	s1.rank=3;
	printf("name:%s clas:%d marks:%d rank:%d\n",s1.name,s1.clas,s1.marks,s1.rank);
//	strcpy(s2.name,"shyam");
//	s2.clas=7;
//	s2.marks=89;
//	s2.rank=2;
	printf("name:%s clas:%d marks:%d rank:%d\n",s2.name,s2.clas,s2.marks,s2.rank);
//	strcpy(s3.name,"ham");
//	s3.clas=8;
//	s3.marks=100;
//	s3.rank=1;
	printf("name:%s clas:%d marks:%d rank:%d\n",s3.name,s3.clas,s3.marks,s3.rank);

}
