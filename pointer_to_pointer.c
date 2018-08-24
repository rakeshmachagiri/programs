#include<stdio.h>
main()
{
	int a=10;
	int *p=&a;
	printf("address of a %d\n",p);      // adrees of a is2345678
	printf("value in adress a %d\n",*p); // value in that address 10
	
	int **p1=&p;
	printf("address of p %d\n",p1);              // adress of p 567800
	printf("value in adress p %d\n",*p1);      // value inside the p1 2345678
	
	int ***p2=&p1;
	printf("address of p1 %d\n",p2);             // adress of p1 is 789
	printf("value in adress p1 %d\n",*p2);       // value inside p1  567800
	
	
}
