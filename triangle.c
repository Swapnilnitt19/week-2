#include<stdio.h>
int main()
{
	int side1,side2,side3;
    printf("enter the value of side1\n");
	scanf("%d",&side1);
	
	printf("enter the value of side2\n");
	scanf("%d",&side2);
	
	printf("enter the value of side3\n");
	scanf("%d",&side3);
	
if(side1==side2 && side2==side3 && side1==side3)
{
	printf("the triangle is equilateral\n");
}

if(side1==side2 && side2!=side3 && side1!=side3)
{
	printf("the triangle is isosceles\n");
}
 if(side2==side3 && side2!=side1 && side1!=side3)
{
	printf("the triangle is isosceles\n");
}
if(side3==side1 && side2!=side3 && side1!=side2)
{
	printf("the triangle is isosceles\n");
}

else if(side1!=side2 && side2!=side3 && side1!=side3)
{
	printf("the traingle is scalene\n");
}
  return 0;
}

