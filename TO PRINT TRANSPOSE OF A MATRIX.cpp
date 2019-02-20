#include<conio.h>
#include<stdio.h>
int main()
{
	int a[3][4],i,j,b[4][3];
	printf("ENTER THE ELEMENTS OF THE MATRIX\n");
	for(i=0;i<3;i++)
	for(j=0;j<4;j++)
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
		printf(" THE TRANSPOSE OF THE MATRIX IS\n\n");
			for(i=0;i<4;i++)
			{
	for(j=0;j<3;j++)
	{
	b[i][j]=a[j][i];
		printf(" %d",b[i][j]);
	}
	printf("\n");
}
	getch();
}	
