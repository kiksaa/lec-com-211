#include<stdio.h>
int main(){
	int m,n1,n2,r;
	printf("Enter Num 1 : ");
	scanf("%d",&n1);
	printf("Enter Num 2 : ");
	scanf("%d",&n2);
	printf("Calculator Menu :\n");
	printf("\t1. +\n");
	printf("\t2. -\n");
	printf("\t3. *\n");
	printf("\t4. /\n");
	printf("\t5. %%\n");
	printf("Choose menu : ");
	scanf("%d",&m);
	switch(m){
		case 1: r=n1+n2;
		        printf("Ans: Num1 + Num2 = %d\n",r);
		break;
		case 2: r=n1-n2;
		        printf("Ans: Num1 - Num2 = %d\n",r);
		break;
		case 3: r=n1*n2;
		        printf("Ans: Num1 * Num2 = %d\n",r);
		break;
		case 4: r=n1/n2;
		        printf("Ans: Num1 / Num2 = %d\n",r);
        break;
		case 5: r=n1%n2;
	        	printf("Ans: Num1 %% Num2 = %d\n",r);
		break;
		default:printf("Error\n");
	}	
	
	system("pause");
	return 0;	
}
