#include<stdio.h>
int cal(int x,char y,int z);

void main()
{
	int a,b,c;
	char k;
	scanf("%d%c%d",&a,&k,&b);
	c=cal(a,k,b);
	printf("%d",c);  
}
    int cal(int x,char y,int z)
    {
    	int m;
    	if(y=='+')
    	{
    		m=(x+z);
		}
		else if(y=='-')
		{
			m=(x-z);
		}
			else if(y=='*')
		{
			m=(x*z);
		}
			else if(y=='/')
		{
			m=(x/z);
		}
			else if(y=='%')
		{
			m=(x%z);
		}
		return m;
	}
