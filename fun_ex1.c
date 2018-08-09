#include<stdio.h>
void add (int a,int b);
main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	add(x,y);
	printf("%d%d",x,y);
}
  void add (int a,int b)
  
  {
  	int c;
  	c=a+b;
  	printf("%d\n",c);
  }
