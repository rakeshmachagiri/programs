#include<stdio.h>
main()
{
 int array1[100],i,array2[100],array_length; // declaring the variables and arrays
 scanf("%d",&array_length); // scanung the array length to enter the size of the array
 
 for(i=0;i<array_length;i++)
 {
 
 scanf("%d",&array1[i]);     // to scan array1 to enter values
 }
 
 
 for(i=0;i<array_length;i++)
 {
 	array2[i]=array1[(array_length-1)-i];  // to asign the values of array1 to array2 in reverce order
 	
 }
 
 
 
 
  for(i=0;i<array_length;i++)
  {
  	printf("%d",array2[i]);  // to print the values of array2
  }
 
}
