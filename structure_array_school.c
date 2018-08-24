#include<stdio.h>
struct school 
{
	char name[10];
	int roolnumber;
	int clas;
	char grade[1];
};
struct school s1[11];
 
  char option;
  int ink=0,ken=0,jen=1,ren=0;
  int number=0;
 main()
 {
 while(1)
 {  printf("newjoin-A check-C insert-I delit-D\n");
	printf("enter the option:");
	scanf("%c",&option);
	
	switch(option)
	{
		case 'a':
			    s1[ken].roolnumber=jen;
				printf("enter the name:");
				scanf("%s",s1[ken].name);
				printf("enter the class:");
				scanf("%d",&s1[ken].clas);
				printf("enter the grade:");
				scanf("%s",&s1[ken].grade);
	        	ken++;
				jen++;
				break;
		case 'c':
		        printf("enter the rool number");
				scanf("%d",&number);
				for(ink=0;ink<10;ink++)
				{
					if(number==s1[ink].roolnumber)
					{
				    printf("rool_number   name   class   grade\n");
				    printf("     %d        %s      %d       %s\n",s1[ink].roolnumber,s1[ink].name,s1[ink].clas,s1[ink].grade);
					}
				}
				break;		
		case 'd':
		        printf("enter the rool number");
				scanf("%d",&number);
				for(ink=0;ink<10;ink++)
				{
					if(number==s1[ink].roolnumber)
					{
						for(ken=ink;ken<10;ken++)
						{
						s1[ken]=s1[ken+1];
						s1[ken].roolnumber=s1[ken].roolnumber-1;
					    }
					}
				}
				break;		
		case 'i':
		        printf("enter the rool number");
				scanf("%d",&number);
				for(ink=0;ink<=10;ink++)
				{
				   if(number==s1[ink].roolnumber)
			        {
			        	for(ken=10;ken>=ink;ken--)
			        	{
			        	  s1[ken+1]=s1[ken];
			            }
			            printf("enter the name:");
				        scanf("%s",s1[ink].name);
				        printf("enter the class:");
			         	scanf("%d",&s1[ink].clas);
			          	printf("enter the grade:");
			        	scanf("%s",&s1[ink].grade);
			        	
			            for(ren=ink;ren<10;ren++)
			            {
			            	s1[ren+1].roolnumber=s1[ren+1].roolnumber+1;
						}
			               
					  }
				  }
				
				break;
		case 'l':
			     printf("rool_number   name   class   grade\n");
		      for(ink=0;ink<10;ink++)
			  {
			  	 if(s1[ink].roolnumber!=0)
			  	 {
				 printf("     %d        %s     %d       %s\n",s1[ink].roolnumber,s1[ink].name,s1[ink].clas,s1[ink].grade);
			     }
			  }	
			  break;		 
	}
  }
}
