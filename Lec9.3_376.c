#include<stdio.h>
void add(int n1,int n2){//+
	int sum;
	sum=n1+n2;
	printf("Total = %d\n",sum);
}
void dif(int n1,int n2){//-
	int sum;
	sum=n1-n2;
	printf("Total = %d\n",sum);
}
void mul(int n1,int n2){//*
	int sum;
	sum=n1*n2;
	printf("Total = %d\n",sum);
}
void div(int n1,int n2){///
	int sum;
	sum=n1/n2;
	printf("Total = %d\n",sum);
}
int main(){
	int m,num1,num2;
	printf("Enter number1 = ");
	scanf("%d",&num1);
	printf("Enter number2 = ");
	scanf("%d",&num2);
	printf("Meue\n1.Addition\n2.Differnce\n3.Multiply\n4.Division\n");
	printf("Please select Meun : ");
	scanf("%d",&m);
	if(m==1){
		add(num1,num2);
	}
	else if(m==2){
		dif(num1,num2);
	}
	else if(m==3){
		mul(num1,num2);
	}
	else if(m==4){
		div(num1,num2);
	}
	system("pause");
	return 0;
}
