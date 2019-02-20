#include<conio.h>
#include<stdio.h>
int main()
{
	int a,r,i;
	printf("ENTER THE FIVE DIGIT NUMBER");
	scanf("%d",&a);
	for(i=0;i<=4;i++)
	{
		r=a%10;
		printf("%d",r);
		a=a/10;
	}

	getch();
}
