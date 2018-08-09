#include<stdio.h>
main()
{
  int array[10]={1,2,4,5},index,jen;
   
   
   	for(index=0;index<5;index++)
   	   {
   	        if(array[index]+1!=array[index+1])
   	         {
   	         	printf("missing value is %d",array[index]+1);
				}
   	   }
   	    
   	    
	   
   
}
