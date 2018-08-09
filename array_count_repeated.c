#include<stdio.h>
main()
{
	int array[10],i,j,count=1,k,index=10;
	printf("enter the values\n");    // entre the values 
	for(i=0;i<10;i++)
	{
		scanf("%d",&array[i]);   
	}
	for(i=0;i<index;i++)            
	{
	 	for(j=i+1;j<index;j++)
	 	{
	 		if(array[i]==array[j]) // if i=j then it will enter in to for loop 
	 		{
	 			for(k=j;k<index;k++)   // the value of j is replace by next number , 
	 			{
	 				array[k]=array[k+1];
		   		}
		   		j--;               // the j is decrimented for compare the replaced value 
		   		index--;           // index is decrimented becoz the value is replced by next num , then the array siz(index)is reduced
	 			count++;		   // the values are equal then the count will incrimented
			}
		 }
		printf("%d is repeated %d\n",array[i],count);   
		count=1;                                            // count is reduce to 1 becoz to count next eliment repetence
	 } 
}
