#include<stdio.h>
int sum (int x,int y);
int sub (int x,int y);
int multi (int x,int y);
int division (float x,float y);
main()
{
	int a,b,c,d,e;
	float f;
	scanf("%d%d",&a,&b);
	
	c=sum(a,b);
	d=sub(a,b);
	e=multi(a,b);
	f=division(a,b);
	printf("%d\n%d\n%d\n%f",c,d,e,f);
	
}
  int sum (int x,int y)
  {  
      int z;
      z= x+y;
      return z;
  }
  int sub (int x,int y)
  {  
      int z;
      z= x-y;
      return z;
  }
  int multi (int x,int y)
  {  
      int z;
      z= x*y;
      return z;
  }
  int division (float x,float y)
  {  
      float z;
      z= x/y;
      return z;
      
      
  }
  
