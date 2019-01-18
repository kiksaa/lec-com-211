#include<stdio.h>
void add(int n1,int n2){
	int sum;
	sum=n1+n2;
	printf("Total = %d\n",sum);
}
void main(){
	int n1,n2;
	printf("Input real value = ");
	scanf("%d",&n1);
	printf("Input real value = ");
	scanf("%d",&n2);
	add(n1,n2);
}


	


