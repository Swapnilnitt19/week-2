#include<stdio.h>
int main()
{
	int marks,grade;
	
	printf("enter the marks\n");
	scanf("%d",&marks);
	
	if(marks>=90 && marks<=100)
    {
	printf("the grade is 'A'\n");
}
if(marks>=80 && marks<=90)
    {
	printf("the grade is 'B'\n");
}
else if(marks>=70 && marks<=80)
    {
	printf("the grade is 'C'\n");
}
else if(marks>=60 && marks<=70)
    {
	printf("the grade is 'D'\n");
}
else if(marks>=50 && marks<=40)
    {
	printf("the grade is 'E'\n");
}
 else
 {
 	printf("the grade is 'F'\n");
 }
 return 0;
}

