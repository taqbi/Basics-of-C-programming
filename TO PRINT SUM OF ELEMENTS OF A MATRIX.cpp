#include<conio.h>
#include<stdio.h>
int main()
{
	int a[3][3],i,j,sum=0;
	printf("ENTER THE ELEMENTS OF THE MATRIX\n");
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	{
	scanf("%d",&a[i][j]);
		
	}
		for(i=0;i<3;i++)
		{
		
	for(j=0;j<3;j++)
	{
	
		printf(" %d",a[i][j]);
	}
		printf("\n");
	}
	
			for(i=0;i<3;i++)
			{
	for(j=0;j<3;j++)
	{
sum=sum+a[i][j];
	
	}
	printf("\n");
}
	printf("THE SUM OF THE ELEMENTS OF THE MATRIX IS %d",sum);
	getch();
}	
