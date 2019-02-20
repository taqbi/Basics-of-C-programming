#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,q;
	printf("ENTER INPUT 1");
	scanf("%d",&a);
	if((a!=1)&&(a!=0))
	{
	printf("WRONG INPUT");
	exit(0);
}
	printf("ENTER INPUT 2");
	scanf("%d",&b);
	if((b!=1)&&(b!=0))
	{
	printf("WRONG INPUT");
	exit(0);
}
	q=a||b;
	q=!q;
	printf("%d NOR %d =%d",a,b,q);
	
	getch();
}
