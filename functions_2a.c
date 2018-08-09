#include<stdio.h>
int cal ();
void main()
{
	int x;
	x=cal();
	printf("%d",x);
}
	int cal ()
	{
		int a,b,k;
		char c;
		scanf("%d%c%d",&a,&c,&b);
		if(c=='+')
		{ k=(a+b);
		}
		else if(c=='-')
		{
			k=(a-b);
		}
		else if(c=='*')
		{
			k=(a*b);
		}
		else if(c=='/')
		{
			k=(a/b);
		}
		return k;
	}
	

