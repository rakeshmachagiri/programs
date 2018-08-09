#include<stdio.h> 
main()
{
	int number,index,sum;
	scanf("%d",&number);
	while(number>0)    //when number is grater then 0 , the programe will enterd in to the loop
	{
		
		 
	   sum=(number%10); // number is % by10, and the resulted value is stored in sum;
       number=number/10; // number is / by 10 and the resulted value is stored in number
				printf("%d\n",sum); // the number which is stored in sum 
		//index++;
		
		}

		
}
