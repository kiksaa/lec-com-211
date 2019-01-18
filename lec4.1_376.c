#include<stdio.h>
int main()
{
	char name[40],id[15];
	int point1,point2,point3,area;
	printf("Enter your Name Surname : ");
	scanf("%[^\n]",name);
	printf("Enter your Student ID   : ");
	scanf("%s",id);
	printf("Enter your Score\n");
	printf("\n\tLaboratory (15%%) = ");
	scanf("%d",&point1);
	printf("\n\tMidterm (35%%)    = ");
	scanf("%d",&point2);
	printf("\n\tFinal (50%%)      = ");
	scanf("%d",&point3);
	area = point1+point2+point3;
	printf("\nTotal (100%%) = %d\n",area);
	scanf("%d",&area);
	system("pause");
	return 0;
}
