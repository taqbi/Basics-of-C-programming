#include<stdio.h>
#include<conio.h>
int main()
{
	int t,i,a;
	printf("Enter any number decimal you want to convert into binary");
	scanf("%d",&a);
	printf(" Binary conversion of%d is  ",a);
	while(a>0)
	{
    t=a%2;
	printf("%d",t);

	a=a/2;
	
	}

	printf(" (read it reverse)  ");
	
getch();
}

