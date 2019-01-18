#include<stdio.h>
int main(){
struct birthday{
	int day,year;
	char month[10];
};
struct student{
	char code[10],name[15];
	struct birthday bir;
};
	struct student s1;
	printf("Input your Code :");
	scanf("%s",s1.code);
	printf("Input your Name :");
	scanf("%s",s1.name);
	printf("Input Birthday EX<01 June 1990> : ");
	scanf("%d %s %d",&s1.bir.day,s1.bir.month,&s1.bir.year);
	
	printf("\n----------------Show Data----------------\n\n");
	printf("Code : %s ,",s1.code);
	printf("Name : %s\n",s1.name);
	printf("Birthday : Day %d ,Month %s ,Year %d\n",s1.bir.day,s1.bir.month,s1.bir.year);
	
	system("pause");
	return 0;
	}
