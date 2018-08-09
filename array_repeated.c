#include<stdio.h>
main()
{
	int array[10],index,size=10,jen,ken,count=1;
	printf("enter the values");
	for(index=0;index<size;index++)
	    {                                  // enter the values which we want to enter
	    	scanf("%d",&array[index]);
		}
	for(index=0;index<size;index++)           // index ,jen for loopse are used for comparing the values, to find the repeated values
	    {
	    	  for(jen=index+1;jen<size;jen++)  // jen=index+1, indicates comparing the next value in the array
	    	 {
	    	 	 if(array[index]==array[jen])   // if index and jen are equal then the value is repeated 
	    	 	    {
	    	 	        for(ken=jen;ken<size;ken++)  // if the values are equal , then the flow enter in to the loop,
						    {
						    	array[ken]=array[ken+1]; // hear the repeated value is replace by next value, 
							}
							jen--;                    // jen count is decreased to compare the replaced position 
							size--;            /*optional*/       // value is replaced by next value , then size is reduced
							count++;	              // if the values are equal then the count is increased
					}
			 }
			 printf("%d is repeated %d times\n",array[index],count); // printing repeated values with count
			 count=1;                                       // count=1, to count the next value repeatence from 1
		}	 
}
