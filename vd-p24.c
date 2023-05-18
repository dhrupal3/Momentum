#include<stdio.h>

main()
{
	char a;
	printf("Enter Your Value = ");
	scanf("%c",&a);
	
	if(a>='a' && a<='z')
	{
		printf("Value Is Character.");
	}
	else if(a>='0' && a<='9')
	{
		printf("Digit Print");
	}
	else
	{
		printf("special character.");
	}
}
