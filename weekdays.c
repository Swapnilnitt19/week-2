#include<stdio.h>

int main()
{
	int day;
	int weekday;
	
	printf("enter the day\n");
	scanf("%d",&day);
	
	if(day==1)
	{
		printf("monday\n",weekday);
	}
	else if(day==2)
	{
		printf("tuesday\n",weekday);
	}
	else if(day==3)
	{
		printf("wensday\n",weekday);
	}
	else if(day==4)
	{
		printf("thursday\n",weekday);
	}
	else if(day==5)
	{
		printf("friday\n",weekday);
	}
	else if(day==6)
	{
		printf("saturday\n",weekday);
	}
	
else if (day==7)
{
	printf("sunday\n",weekday);
}
return 0;
}
