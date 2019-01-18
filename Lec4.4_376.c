#include<stdio.h>
int main(){
	int type;
	printf("\t***Matter type***\n");
	printf(" 1. Type1\n 2. Type2\n 3. Type\n 4. Type\n 5. Type\n");
	printf("Choose Type : ");
	scanf("%d",&type);
	switch(type){
		case 1: printf("Type1 : Carbon = 5 atom , Status = Gas\n");
		break;
		case 2: printf("Type2 : Carbon = 6 atom , Status = Liquid\n");
		break;
		case 3: printf("Type3 : Nitrogen = 6 atom , Status = Gas\n");
		break;
		case 4: printf("Type4 : Nitrogen = 4 atom , Status = Solid\n");
		break;
		case 5: printf("Type5 : Type1 and have Hydorgen\n");
		break;
		default: printf("Error\n");
	}
	system("pause");
	return 0;
	
}
