#include<stdio.h>
#include<conio.h>
#define PI 3.14
int main()
{
	int r;
	float a;
	printf("enter radius");
	scanf("%d",&r);
	a=PI*r*r;
	printf("%f",a);
	getch();
}
