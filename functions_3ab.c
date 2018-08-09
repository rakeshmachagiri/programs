#include<stdio.h>
main()
{int a,b,c;
 scanf("%d%d%d",&a,&b);
 c=comp(a,b);
 printf("%d",c);
}
int comp (int x,int y)
{
	int k;
	if(x>y)
	{
	k=("x is grater",x);
	}
	else 
	{ 
	 k=(" %d y is grater",y);
	}
	return k;
}
