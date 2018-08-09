#include<stdio.h>
int sum(int p,int q, int r, int s);
main()
{
	int a,b,c,d,e;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	e=sum(a,b,c,d);
	printf("%d",e);
	
	
}
int sum(int p,int q, int r, int s)
{   
    int t;
	
	t=(p+q+r+s);
	return t;
	
	
	
}
