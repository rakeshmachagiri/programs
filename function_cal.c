#include<stdio.h>
void oper (int x,char y,int z);
main()
{
	int a,b;
	char c;
	scanf("%d%c%d",&a,&c,&b);
	oper(a,c,b);
	
}
void oper (int x,char y,int z)
{
	if(y=='+')
	{
	printf("%d",x+z);
    } 
 	else if(y=='-')
 	{
	 	printf("%d",x-z);
	 }
	 else if(y=='*')
 	{
	 	printf("%d",x*z);
	 }
	 else if(y=='/')
 	{
	 	printf("%d",x/z);
	 }


}

