#include<conio.h>
#include<stdio.h>
int main()
{
	int a[3][3],i,j,b[3][3],ch=0;
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
	printf(" THE TRANSPOSE OF THE MATRIX IS\n\n");
			for(i=0;i<3;i++)
			{
	for(j=0;j<3;j++)
	{
	b[i][j]=a[j][i];
		printf(" %d",b[i][j]);
	}
	printf("\n");
}
	for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
{	
if(b[i][j]==a[i][j])
ch=ch+1;
	
		else
		ch=ch+0;
}
}
if(ch==9)
	printf("THE MATRIX IS SYMMETRIC");
else
	printf("THE MATRIX IS NOT SYMMETRIC");
	getch();
}	
