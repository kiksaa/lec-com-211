#include<stdio.h>
int main(){
	int num,i=1;
		printf("Enter a number : ");
		scanf("%d",&num);
	do{
		if(num>=2&&num<=25){
			printf("%d * %d  =  %d\n",num,i,num*i);
			i++;	
		}else{
			printf("Enter number = ");
			scanf("%d",&num);
		}
	}while(i<=12);
	system("pause");
	return 0;
}
