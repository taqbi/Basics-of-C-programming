#include<conio.h>
#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter n : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
		printf(" ");
	}
		for(j=1;j<=i;j++)
		{
		printf("%d",j);

	    }
	    for(j=1;j<i;j++)
		{
		printf("%d",j);
	}
	   	printf("\n");
	}
getch();
}
