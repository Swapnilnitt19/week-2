#include<stdio.h>
int main()
{

  int year,month;
	
	printf("enter the year\n");
	scanf("%d",&year);
	
	printf("enter the month\n");
	scanf("%d",&month);
	
	if(((year%4==0 && year%400==0) || year%100!=0) && month==2)
	  printf("29\n");
	  
	else if(((year%4==0 && year%400==0) || year%100!=0) && (month==1,3,5,7,8,10,12))
	  printf("31\n");
	  
	else if(((year%4==0 && year%400==0) || year%100!=0) && (month== 4,6,9,11))
	  printf("30\n");
	  
	else if(month==1,3,5,7,8,10,12) 
	{
		printf("31\n");
		
	 } 
	 else if(month==4,6,9,11)
	  {
	  	print("30\n");
}
    else if(month==2)
     {
     	printf("28\n");
	 }
	 return 0;
}
	 
