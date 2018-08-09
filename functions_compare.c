#include<stdio.h>
void compare (int x,int y);
main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	compare (a,b);
}
void compare (int x,int y)
{

	if(x>y)
	{
		printf("%d is grater",x);
	}
	else
	{
		printf("%d is lower",y);
	}
}
