#include<stdio.h>
main()
{
	char str[100]="my name is rakesh and i am mad"; // intializing the string
	int index=0,count=0,test=0;  // initializing the variables
	while(str[index]!='\0')     // it will check up to null value
	    {  
	       	switch(str[index])  
	    	    {
	    	    	case ' ':     //if str[index]=space , 
	    	    	count++;      // count is incrimented
	    	    	test=index;    // asigning index value to test
	    	    	while(str[++test]==' ') // checking adjesent spaces in the string
	    	    	{
	    	    		index++;      // incrimenting index value so that we can ignore the spaces
					}
					break;	
				}
				index++;             // index is incrimented
		}
		printf("%d",(count+1));       // printing count+1 , becoze (if space is 1, then words are 2)
//puts(str);
}
