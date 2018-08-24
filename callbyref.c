#include<stdio.h>
void swap(int *a,int *b);
main()
{
	int x=10,y=20;
	printf("before 77x=%d\n y=%d\n",x,y);
	swap(&x,&y);
}
void swap(int *a,int *b)
{
	int c=a;
	a=b;
	b=c;
	printf("x=%d\n y=%d\n",*a,*b);
}
