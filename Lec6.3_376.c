#include<stdio.h>
#include<conio.h>
int main(){
	char ch[30];
	int x=0,y,z;
	printf("Enter a sentence : \n");
	scanf("%[^\n]",ch);
	while(ch[x]!=0){
		x++;
	}
	printf("\n");
	printf("Result : \n");
	for(y=0;y<x/10;y++){
		for(z=0+(y*10);z<=9+(y*10);z++){
			printf("%c",ch[z]);
		}printf("\n");
		
	}
	for(y=x-(x%10);y<x;y++){
		printf("%c",ch[y]);
	}printf("\n");
	
	system("pause");
	return 0;
}
