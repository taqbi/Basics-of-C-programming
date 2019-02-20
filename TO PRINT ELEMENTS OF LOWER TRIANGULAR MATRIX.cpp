#include<conio.h>
#include<stdio.h>
int main()
{
	int a[3][3],i,j;
	printf("ENTER THE ELEMENTS OF THE MATRIX\n");
	for(i=0;i<3;i++)
	for(j=0;j<3;j++)
	scanf("%d",&a[i][j]);
		printf(" THE ELEMENTS OFUPPER TRIANGULAR MATRIX ARE\n\n");
			for(i=0;i<3;i++)
			{
	for(j=0;j<3;j++)
	{
		if(i>=j)
		printf(" %d",a[i][j]);
	}
	printf("\n");
}
	getch();
}	
