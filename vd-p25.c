#include<stdio.h>

main()
{
	int u,eb,sc,tb;
	
	printf("Enter Unit = ");
	scanf("%d",&u);
	
	if(u<=50)
	{
		eb=u*0.50;
	}
	else if(u<=150)
	{
		eb=(u-50)*0.75+25;
	}
	else if(u<=250)
	{
		eb=(u-150)*1.20+100;
	}
	else
	{
		eb=(u-250)*1.5+220;
	}
	
	sc=eb*0.2;
	tb=eb+sc;
	
	printf("Total Electric Bill = %d.",tb);
}
