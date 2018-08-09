#include<stdio.h>
main()
{
	int array1[10],i,array2[10];
	printf("enter the values of array1\n");
	for(i=0;i<10;i++)
	 {
	 	scanf("%d",&array1[i]);
	 }
	 for(i=0;i<10;i++)
	 {
	  array2[i]=array1[i];
	  printf("%d",array2[i]);

     }
	
	 
} 
