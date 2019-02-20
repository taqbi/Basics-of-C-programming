#include<conio.h>
#include<stdio.h>
int main()
{
	int i,n,m,q=1;
	printf("enter the number");
	scanf("%d",&n);
	printf("enter the power");
		scanf("%d",&m);
		for(i=0;i<m;i++)
		{
			q=q*n;
			q=q%10;
			
		}
	printf("%d",q);

	getch();
}
