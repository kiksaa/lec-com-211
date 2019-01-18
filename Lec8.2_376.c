#include<stdio.h>
int main(){
	int num[20],i,max;
	for(i=1;i<=20;i++){
		printf("Enter number %d = ",i);
		scanf("%d",&num[i]);
		
		if(num[i]>max){
			max=num[i];
		}
	}
	for(i=1;i<=20;i++){
		if(max==num[i]){
			printf("Max position = %d\n",i);
		}
	}
	printf("Max Value = %d\n",max);
	system("pause");
	return 0;
}
