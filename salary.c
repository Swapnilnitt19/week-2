#include<stdio.h>
int main()
{
	int basic , da, hra;
	printf(" enter the basic salary : \n");
	scanf("%d",&basic);
	
	da=basic*50/100;
	hra=basic*10/100;
	printf(" total salary is %d\n ",basic+da+hra);
	return 0;
}
