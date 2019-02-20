#include<conio.h>
#include<stdio.h>
void swap(int x,int y);
int main()
{
	int a,b;
	
	printf("enter two numbers");
	scanf("%d %d",&a,&b);
	swap(a,b);
	
	getch();
}
 void swap(int x,int y)
{
	int z;
	z=x;
	x=y;
	y=z;
	printf("values after swap are %d %d",x,y);
}
