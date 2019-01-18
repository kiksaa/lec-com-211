#include<stdio.h>
int main(){
	int prices[1][1];
	
	printf("Enter prices = ");
	scanf("%d",&prices[0][0]);
	printf("Enter amount = ");
	scanf("%d",&prices[0][1]);
	
	printf("All change = %d\n",prices[1][0]-prices[0][0]);
	
	system("pause");
	return 0;
}
