#include<stdio.h>
void add (int a,int b);
void main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	add(x,y);
	printf("%d%d",x,y);
}
    void add (int a, int b)
    {
    	int c=a+b;
    	printf("%d",c);
	}

