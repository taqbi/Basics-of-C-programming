#include<conio.h>
#include<stdio.h>
#include<windows.h>
int main()
{
	int a[6],i,n;
	printf("ENTER THE ARRAY ELEMENTS");
	for(i=0;i<=6;i++)
	scanf("%d",&a[i]);
	printf("enter the element to be inserted at the begining");
	scanf("%d",&n);
	a[0]=n;
	for (i=0;i<=6;i++)
	printf("%d",a[i]);
	getch();
}
