#include<stdio.h>
main()
{
	char str1[100],str2[100],str3[100],size1=0,size2=0,i;
	 gets(str1);
	 while(str1[size1]!='\0')
	     {
	     	size1++;
		 }
	 gets(str2);
	while(str2[size2]!='\0')
	     {
	     	size2++;
		 }
    for(i=size1;i<(size1+size2);i++)
       {
       	
       	   str1[i]=str2[i-size1];
          
	   }
	   str1[i]='\0';
	 
	puts(str1);
}
