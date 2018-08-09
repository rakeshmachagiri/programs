#include<stdio.h>
main()
{
 int array1[100],i,array2[100],array_length;
 scanf("%d",&array_length);
 for(i=0;i<array_length;i++)
 {
 
 scanf("%d",&array1[i]);
 }
 
 
 for(i=0;i<array_length;i++)
 {
 	array2[i]=array1[(array_length-1)-i];
 	
 }
 
 
 
 
  for(i=0;i<array_length;i++)
  {
  	printf("%d",array2[i]);
  }
 
}
