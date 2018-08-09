#include<stdio.h>
main()
{
	char str1[100],str2[100],index,size1,size2,count=0;
	gets(str1);
	while(str1[size1]!='\0')
	 {
	 	size1++;
	 }
	gets(str2);
	while(str2[size2]!='\0')
	 {
	 	size2++;
	 }
	  if(size1==size2)
	  {
	  	for(index=0;index<size1;index++)
	  	  {
	  	  	if(str1[index]==str2[index])
	  	  	{
	  	  	 count++;
	  	    }
	  	  }
	  	 if(count==size1-1)
	  	        {
	  	 		printf("names are same");
		        }
		 else
		        {
		        printf("names are not same");	
				}
	  }
	  else
	  {
	  	printf("names are not same");
	  }
}
