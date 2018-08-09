#include<stdio.h>
main()
{
	int array[10],index,jendex,itration,max_index=10; // declaring the variables
	for(index=0;index<max_index;index++) // scaning the enterd values which we are enterd
	{
	scanf("%d",&array[index]);
    }
     

for (index=0;index<max_index;index++)    
                                                // we are comparing arrat[i] with all other array[i], 
{
	for(jendex=index+1;jendex<max_index;jendex++)
	{
		
	  if (array[index]==array[jendex]) // if index is equal to jendex
	    {
	    	for(itration=jendex;itration<max_index;itration++)
	    	{
	    	array[itration]=array[itration+1]; // the repeated values are replaced by next eliments
	    	
	        }
	        max_index=max_index-1;
			jendex--;            // to reduce the size of array , be coz we are removing repeated values
		}
	}
	
}
     for(index=0;index<max_index;index++) // to print ***** ALL***** single numbers (removed repated) numbers
     {
     	printf("%d ",array[index]);  
	 }
}
