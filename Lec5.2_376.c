#include<stdio.h>
int main(){
	int dec,as;
	printf("Decimal       ASCII\n");
	for(dec=33 , as=33;dec<=55 , as<=55;dec++ , as++)     
	{
		printf("  %d  \t\t%c\n\n",dec,as);  
	}
    system("pause");
	return 0;
}
