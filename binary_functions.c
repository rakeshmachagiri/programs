#include<stdio.h>
void binary (int x);
main()
{
	int a;
	scanf("%d",&a);
	binary(a);
	
}
void binary (int x)
{    
int i=7;
	while(i>=0)
	{
		if((x&(1<<i))==(1<<i))
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
		i--;
	}
}
