#include<stdio.h>
int main (){
	typedef union{
		int num;
	}asscii;
	asscii ass;
	int i;
	for(i=65;i<=90;i++){
		ass.num=i;
		printf ("ASSCII %d %c\n",ass.num,ass.num);
	}
	system ("pause");
	return 0;
}

