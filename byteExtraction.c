#include<stdio.h>
void byteExtract(int ptr);
main()
{
	int number=0;
	scanf("%d",&number);
	byteExtract(number);
	
}
void byteExtract(int ptr)
{
	char first,second;
	first=first|ptr;
	printf("%d	",first);
	second=(ptr>>8)|second;
	printf("%d",second);
}
