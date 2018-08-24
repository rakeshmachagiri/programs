#include<stdio.h>
void swap(int *num1,int *num2)
 {
 	int num3=*num1;
 	*num1=*num2;
 	*num2=num3;
 	printf("%d %d\n",*num1,*num2);
 	
 }
void main()
{
	 int val1=10,val2=20;
	swap(&val1,&val2);
	printf("%d %d",val1,val2);
 } 

