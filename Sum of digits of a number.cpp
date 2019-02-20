#include<conio.h>
#include<stdio.h>
int main()
{
	int a,b,c=0;
	printf("enter any number");
	scanf("%d",&a);
	while(a>0)
{
	b=a%10;
	c=b+c;
	a=a/10;
	
}
printf("sum of digits is %d",c);
getch();	 
}
