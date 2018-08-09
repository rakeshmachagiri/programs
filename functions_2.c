#include<stdio.h>
int add ();
void main()
{
	int c;
	c=add();
	printf("%d",c);	
}
int add ()
{
	int a,b,d;
	scanf("%d%d",&a,&b);
	d=a+b;
	return d;
}

