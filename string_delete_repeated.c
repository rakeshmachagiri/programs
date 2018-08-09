#include<stdio.h>
main()
{
	char str[100];
	int index,jen,ken,length=0;
	gets(str);
	while(str[length]!='\0')
	     {
	     	length++;
		 }
	//printf("%d\n",length);
	for(index=0;index<length;index++)
	    {
	    	for(jen=index+1;jen<length;jen++)
	    	    {
	    	    	if(str[index]==str[jen])
	    	    	   {
	    	    	   	for(ken=jen;ken<length;ken++)
	    	    	   	    {
	    	    	   	    	str[ken]=str[ken+1];
	    	    	   	    
		                    }
							jen--;
					    length--;	 
					   }
					   
					  
				}
	    }
		str[length]='\0';
		puts(str);	 
}
