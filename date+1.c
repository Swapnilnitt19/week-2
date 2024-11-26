#include<stdio.h>
int main()
{
	int d,m,y;
	printf("enter the date month and year : ");
	scanf("%d %d %d",&d,&m,&y);
	
	if (m>=1 && m<=12)
  		{
	
			if ((y%4==0 && y%100!=0)|| y%400==0 )
			{ if ((m==1||m==3||m==5||m==7||m==8||m==10) && d<=31 && d>=1)
				{if (d==31)
					printf("the next date is %d %d %d",1,m+1,y);
				else 
					printf("the next date is %d %d %d",d+1,m,y);
				}	
				
			if(m==12 && d<=31 && d>=1)
				{if(d==31)
					printf("the next date is &d &d &d",1,1,y+1);
				else
					printf("the next date is %d %d %d",d+1,m,y);
				}
				
			if ((m==4||m==6||m==9||m==11)&& d<=30 && d>=1)
				{if(d==30)
					printf("the next date is &d &d &d",1,m+1,y);
				else
					printf("the next date is %d %d %d",d+1,m,y);
				}
				
			if (m==2 && d<=29 && d>=1 )
				{if (d==29)
					printf("the next date is %d %d %d",1,m+1,y);
				else
					printf("the next date is %d %d %d",d+1,m,y);
					
				}
				
			}
			
			else
			{
				if (m==1||m==3||m==5||m==7||m==8||m==10 && d<=31 && d>=1)
					{
					if (d==31)
					printf("the next date is %d %d %d",1,m+1,y);
					else 
					printf("the next date is %d %d %d",d+1,m,y);
					}	
				
				if(m==12 && d<=31 && d>=1)
					{
					if(d==31)
					printf("the next date is %d %d %d",1,1,y+1);
					else
					printf("the next date is %d %d %d",d+1,m,y);
					}
				
				if ((m==4||m==6||m==9||m==11) && d<=30 && d>=1);
					{
					if(d==30)
					printf("the next date is %d %d %d",1,m+1,y);
					else
					printf("the next date is %d %d %d",d+1,m,y);
					}
				
				if (m==2 && d<=28 && d>=1 )
					{
					if (d==28)
					printf("the next date is %d %d %d",1,m+1,y);
					else
					printf("the next date is %d %d %d",d+1,m,y);
					}
			}	
	 	}
	
	else 
	   printf(" invalid input ");
	   
	return 0;
}
