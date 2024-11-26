#include<stdio.h>
int main()
{
	int unit,sur,charge;
	
	sur=20;
	charge=10;
	
	printf("enter the unit\n");
	scanf("%d",&unit);

	
	printf("the electricity bill is %d\n",unit*charge+sur);
	
	return 0;
}
