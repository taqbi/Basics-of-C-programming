#include<conio.h>
#include<stdio.h>
int num(int x);
int main()
{
	int a,y;
	printf("ENTER THE NUMBER");
	scanf("%d",&a);
	y=num(a);
	if(y==1)
	printf("%5d IS EVEN",a);
	if(y==2)
	printf("%5d NUMBER IS ODD",a);

	getch();
}
int num(int x)
{

if(x%2==0)
return 1;
else
return 2;
}
