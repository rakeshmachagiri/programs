#include<stdio.h>
main()
{
	char str1[100],str2[100],str3[100];
	int index1,index2,index3,number;
	printf("enter the string 1 : ");
	gets(str1);
	printf("enter the string 2 : ");
	gets(str2);
	printf("enter the number : ");
	scanf("%d",&number);
	
	for(index1=0;index1<number;index1++)
	    {
	    	str3[index3]=str1[index1];
	    	index3++;
		}
	while(str2[index2]!='\0')
	      {
	      	  str3[index3]=str2[index2];
	      	  index2++;
	      	  index3++;
		  }	
		  index1--;
	while(str1[index1]!='\0')
	     {
	     	str3[index3]=str1[index1];
	     	index1++;
	     	index3++;
		 }
	str3[index3]='\0';
	puts(str3);	 	  
}
