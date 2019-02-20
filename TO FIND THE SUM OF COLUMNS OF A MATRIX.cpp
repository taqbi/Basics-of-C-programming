#include<conio.h>
#include<stdio.h>
int main()
{
	int a[4][3],i,j,sum;
	printf("ENTER THE ELEMENTS OF THE MATRIX\n");
	for(i=0;i<4;i++)
	for(j=0;j<3;j++)
	{
	scanf("%d",&a[i][j]);
		
	}
		for(i=0;i<3;i++)
		{
		
	for(j=0;j<4;j++)
	{
	
		printf(" %d",a[i][j]);
	}
		printf("\n");
	}
			
	for(j=0;j<4;j++)
	{
sum=0;
for(i=0;i<3;i++)
{
	sum=sum+a[i][j];
	}
	printf("\n THE SUM OF COLUMN %d OF THE MATRIX IS %d",j,sum);
}

	getch();
}	
