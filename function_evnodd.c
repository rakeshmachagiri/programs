#include<stdio.h>
void type (int x);
main()
{
	int a;
	scanf("%d",&a);
	type(a);
	printf("rakesh");
}
void type (int x)
{
	if ((x%2)==0)
	printf("even\n");
	else
	printf("odd\n");
}
