#include<stdio.h>

main()
{
	char day;
	printf("M-Monday.\n");
	printf("t-Tuesday.\n");
	printf("W-Wensday.\n");
	printf("T-Thursday.\n");
	printf("F-Friday.\n");
	printf("S-Saturday.\n");
	printf("s-Sunday.\n");
	printf("Enter Day = ");
	scanf("%c",&day);
	
	switch(day)
	{
		case'M':
			    printf("Monday");
			    break;
			    
		case't':
			    printf("Tuesday");
			    break;
								    
		case'W':
			    printf("Wednesday");
			    break;
							    
		case'T':
			    printf("Thursday");
			    break;	
						    
		case'F':
			    printf("Friday");
			    break;	
						    
		case'S':
			    printf("Saturday");
			    break;	
						    
		case's':
			    printf("Sunday");
			    break;
							    
	    default:
	    	     printf("Enter Proper Value.");
				  
			
	}
	
 return 0;	
	
	
	
}
