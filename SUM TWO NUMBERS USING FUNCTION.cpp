#include<conio.h>
#include<stdio.h>
void sum();
int main()
{
	sum();
	getch();
}
void sum()
{
	int a,b,c;
	printf("ENTER THE TWO NUMBERS ");
	scanf("%d %d",&a,&b);
	c=a+b;
	printf("THE SUM IS %d",c);
}
