#include<conio.h>
#include<stdio.h>
#include<windows.h>
int main()
{
	int a[20],i,n,u;
	printf("ENTER THE UPPERBOUND");
	scanf("%d",&u);
	if((u>=19)||(u==1))
	exit(0);
	printf("ENTER THE ARRAY ELEMENTS");
	for(i=0;i<=u;i++)
	scanf("%d",&a[i]);
	a[u]='\0';
u=u-1;
printf("THE ARRAY AFTER DELETION IS");
	for (i=0;i<=u;i++)
	printf(" %d",a[i]);
	getch();
}
