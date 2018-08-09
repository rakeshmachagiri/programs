#include<stdio.h>
main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if((a>b)&&(a>c))
	 {
	 	printf("%d is bigger",a);
	 }
	 else if((b>a)&&(b>c))
	    {
	    	printf("%d is bigger",b);
		}
	  else if((c>a)&&(c>b))
	    {
	    	printf("%d is bigger",c);
		}
	  else if((a==b)&&(b==c))
	    {
	    	printf("all numbers are eqal");
		}
	  else if((a==b)||(b=c)||(c==a))
	    {
	    	printf("two numbers are equal");
		}
		
		
}
