#include<conio.h>
#include<stdio.h>
#include<windows.h>
int main()
{
	int a[20],i,n,u,z;
	printf("ENTER THE UPPERBOUND");
	scanf("%d",&u);
	if(u>=19)
	exit(0);
	printf("ENTER THE ARRAY ELEMENTS");
	for(i=0;i<=u;i++)
	scanf("%d",&a[i]);
	printf("enter the element to be inserted ");
	scanf("%d",&n);
	printf("enter the position at which the  element is to be inserted ");
	scanf("%d",&z);
	u=u+1;
		for (i=u;i>=z;i--)
		a[i+1]=a[i];
	a[z]=n;
	printf("the array after insertion is");
	for (i=0;i<=u;i++)
	printf("%d",a[i]);
	getch();
}
