#include<stdio.h>
int main(){
	int a ,b,c;
	printf(" enter  number a :\n ");
	scanf("%d",&a);
	printf("enter number b : \n");
	scanf("%d",&b);
	printf(" enter number c :\n");
	scanf("%d",&c);
	
	if(a>b && a>c){
		printf(" a is greater ");
	}
	else if(b>a && b>c){
		printf(" b is greater ");
		
	}
	else if(c>a && c>b){
		printf(" c is greater ");
	}
	return 0;
}
