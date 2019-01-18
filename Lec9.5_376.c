#include<stdio.h>
#include<conio.h>
void main(){
	int a,b,c;
	printf("number a : ");
	scanf("%d",&a);
	printf("number b : ");
	scanf("%d",&b);
	printf("number c : ");
	scanf("%d",&c);
	Calc(a,b,c);
}
void Calc(int a,int b,int c){
	int x;
	x = a*a*(c+(b/2*a));
	printf("Total is : %d\n",x);
}
