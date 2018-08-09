#include<stdio.h>
main()
{
	int a,b;
	scanf("%d",&a);
	b=cube(a);
	printf("%d",b);
}
 int cube (int x)
 {
 	int y;
 	y=(x*x*x);
 	return y;
 }
