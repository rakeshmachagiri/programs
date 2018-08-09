#include<stdio.h>
#include<string.h>
main()
{
	char str[100]; // declaring the array
	int count=0,index=0; // initializing the variables
	gets(str);              // entering values in to the array
	while(str[index]!='\0') // it will check up to the condition id fairakeshls
	{  
	switch(str[index])   // if str[index] value is equal 
	{
	case  'a':         //if str[index]='a'; 
		count++;
		              // count is increased to 1,
		break;
	case 'e':
		count++;
		break;
	case 'i':
		count++;
		break;
	case 'o':
		count++;
		break;
	case 'u':
		count++;
		break;
    }
		index++;
    }
	printf("%d",count);     // printing count of total ovels;
}
