#include<stdio.h>
int main(){
	int num[1],i;
	for(i=0;i<1;i++){
		printf("Enter number = ");
		scanf("%d",&num[0]);
	}
	
	printf("-------------------\n");
		for(i=0;i<num[0];i++){
			
			printf("Enter your number = ");
			scanf("%d",&num[1]);
		}
	system("pause");
	return 0;
}
