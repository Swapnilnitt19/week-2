#include<stdio.h>
int main()
{   int a,b,c;

	printf("enter the value of a\n");
	scanf("%d",&a);
	printf("enter the value of b\n");
	scanf("%d",&b);
	printf("enter the value of c\n");
	scanf("%d",&c);
	
	if(a>b && a>c)
	{
		printf("the maximum point value is %d\n",a);
		
	}
	
else if(b>a && b>c)
{
	printf("the maximum point value is %d\n",b);
	
}
else if (c>a && c>b)
{
	printf("the maximum point value is %d\n",c);
}
else if(a==b==c)
{
	printf("the point value is %d\n",a);
}

	return 0;
}

	
