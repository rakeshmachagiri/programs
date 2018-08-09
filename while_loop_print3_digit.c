#include<stdio.h>
main()
{
	int number,number1,index=0 ,count,index1; //decliring variables
	scanf("%d",&number); //scan the variable as input
	number1=number;  //the value of number is assigned to number1
	while(number>0) //if number is greater then 0,it will enter the loop, and loop will continue unless when number is lessthen or equal to 0
	{
	 number=(number/10); //number is devided by 10 ,and the resulted value stared in 'number'
       index++;  // incrimented
	}
	for(index1=0;index1<=(index-4);index1++) //if index1=0, and index value is lessthen or equal t0 value of index-4, 
		{
		
	     number1=(number1/10); //number1 value is devided by 10, and the resulted value is stored in number1
       
        }

	 
	 printf("%d",number1%10); //the stored value is number1 is % by10, and reminder is printed out as result
}
