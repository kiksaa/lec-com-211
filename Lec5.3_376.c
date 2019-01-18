#include<stdio.h>
int main()
{
	int n,sum=0;
	do{
	printf("Enter a number : ");
	scanf("%d",&n);	
	sum=n*n+sum;
	}while(n!=0);
	printf("Result : %d\n",sum);
	system("pause");
	return 0;
}
