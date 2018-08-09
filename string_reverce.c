#include<stdio.h>
main()
{
   char str[100],i,count=0,t;
   int g;
   gets(str);
   while (str[count]!='\0')
    {
    	count++;
	}
	
	g=count-1;
	count=count/2;
   for(i=0;i<count;i++)
     {
    
         t=str[i];
         str[i]=str[g];
         str[g]=t;
         
         g--;
	 }
     puts(str) ;
     
}

