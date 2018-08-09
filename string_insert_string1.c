#include<stdio.h>
main()
{
	char str1[100],str2[100],str3[100];// declaring 3 different strings
	int index1=0,index2=0,index3=0,number=0;// initiaizing variables;
	printf("enter the string 1 : "); 
	gets(str1);                          // enter the first string
	printf("enter the string 2 : ");
	gets(str2);                          // enter the second string
	printf("enter the number : ");
	scanf("%d",&number);                 // enter the number 
	
	for(index1=0;index1<number;index1++)  // the values from str1 to string3 up to less then number are copied
	    {
	    	str3[index3]=str1[index1];    
	    	index3++;                     // index3 AND index1 is incrimented up to less then NUMBER times
		}
	while(str2[index2]!='\0')           //we can copy the str2 values to str3 up to NULL value,
	      {
	      	  str3[index3]=str2[index2]; // values are copied from index3=number up to the \0 of str2.
	      	  index2++;                  // index2,index3 are incrimented
	      	  index3++;
		  }	
	while(str1[index1]!='\0')       // adding the remaining values of str1 to str3, except \0
	     {
	     	str3[index3]=str1[index1];  // adding str1 values to str3, from next index value after str2 values 
	     	index1++;                 // index1 and index3 are incrimented
	     	index3++;
		 }
//	str3[index3]='\0';              // adding \0 to str3 to the end of the string3
	puts(str3);	 	                 // it will print the resulted string
}
