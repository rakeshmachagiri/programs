#include<stdio.h>
main()
{
	char str[100];   //declaring the string
	int length=0,index; // declaring the int length and index

	gets(str);          // enter the values in string by using gets;
	while(str[length]!='\0') // finding the length of the string , it will check up to the condition is fail
	{
	//	str[length]=str[length]+32; 
		length++;          // the count is increased when the condition is true
	}
	for(index=0;index<length;index++)
	{
		str[index]=str[index]+32;   // if the value of STR[INDEX]=A, then A is assigned with A+32;
	}                               // A VALUE is 65,  then 65+32=97; then a=97,
	                                // so it will print small a;
printf("%s",str);        // we can print resulted string hear
}
