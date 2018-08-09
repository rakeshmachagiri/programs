#include<stdio.h>
main()
{
	char str[100];
	int length=0,index,count=0;
	gets(str);
	while(str[length]!='\0')
	     {
	     	length++;
		 }	 
	for(index=0;index<length/2;index++)
	{
		  if(str[index]==str[(length-1)-index])
		  {
		  	count++;
		  }
		  else
		  {
		  	break;
		  }
	}
	printf("%d",count);
	if(count==(length/2))
	   {
	   	printf("it is a poindrome");
	   }
	else
	   {
	   	printf("not a polindrome");
	   }   
}
