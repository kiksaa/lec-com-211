#include<stdio.h>
#include<conio.h>
typedef struct {
		int x;
		int y;
	}point;
	 point s;
	 point e;
int area (point a,point b);
int main (){
	int sum;
	printf ("Enter rectangel data\n");
	printf ("\tStart point x : "); 
	scanf ("%d",&s.x);
	printf ("\tStart point y : "); 
	scanf ("%d",&s.y);
	printf ("\tEnd point x : "); 
	scanf ("%d",&e.x);
	printf ("\tEnd point y : "); 
	scanf ("%d",&e.y);
	
	
	sum=area(s,e);
	printf ("Area is %d\n",sum);
	getch();
	return 0;
}
int area (point a,point b){
	int areas;
	areas=(b.x-a.x)*(b.y-a.y);
}
