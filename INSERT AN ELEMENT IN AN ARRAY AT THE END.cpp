#include<conio.h>
#include<stdio.h>
#include<windows.h>
int main()
{
	int a[20],i,n,u;
	printf("ENTER THE UPPERBOUND");
	scanf("%d",&u);
	if(u>=19)
	exit(0);
	printf("ENTER THE ARRAY ELEMENTS");
	for(i=0;i<=u;i++)
	scanf("%d",&a[i]);
	printf("enter the element to be inserted at the end");
	scanf("%d",&n);
	u=u+1;
	a[u]=n;
	for (i=0;i<=u;i++)
	printf("%d",a[i]);
	getch();
}
