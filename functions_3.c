#include<stdio.h>
int add(int x,int y);
void main()
{
	int a,b,c;
	scanf("%d%d",&a,&b);
	c=add(a,b);
	printf("%d",c);
} 
int add(int x,int y)
{
	int z;
	z=x+y;
	return z;
}

