#include<stdio.h>
int main(){
	int number = 5;
	calc (number);
	system("pause");
	return 0;
}
void calc(int n){
	int i=1,num;
	printf("Enter number = ");
	scanf("%d",&num);
	for(i=1;i<=12;i++){
		printf("%d * %d = %d\n",num,i,num*i);
	}
}
