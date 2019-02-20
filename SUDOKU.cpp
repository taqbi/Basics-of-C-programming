#include<conio.h>
#include<stdio.h>
int main()
{
	int a[][9]={
	5,3,4,6,7,8,9,1,2,
	6,7,2,1,9,5,3,4,8,
	1,9,8,3,4,2,5,6,7,
	8,5,9,7,6,1,4,2,3,
	4,2,6,8,5,3,7,9,1,
    7,1,3,9,2,4,8,5,6,
	9,6,1,5,3,7,2,8,4,
	2,8,7,4,1,9,6,3,5,
	3,4,5,2,8,6,1,7,9,
	};
	
	int i,j,sum;
	/*	printf("	4,2,6,8,5,3,7,9,1,\n	5,3,4,6,7,8,9,1,2,\n	6,7,2,1,9,5,3,4,8,\n	1,9,8,3,4,2,5,6,7,\n	8,5,9,7,6,1,4,2,3,\n	7,1,3,9,2,4,8,5,6,\n	9,6,1,5,3,7,2,8,4,\n	2,8,7,4,1,9,6,3,5,\n	3,4,5,2,8,6,1,7,9,\n");
*/	for(i=0;i<=8;i++)
{

{
	for(j=0;j<=8;j++)
	printf("\t%d",a[i][j]);
}
printf("\n");
}
	for(i=0;i<=8;i++)
	{
	sum=0;
	for(j=0;j<=8;j++)	
	sum=sum+a[i][j];
	if(sum!=45)
	printf("\nProblem in the row %d",i);
	
	}
		if(sum=45)
	printf("\nAll rows are correct");
	for(j=0;j<8;j++)
	{
		sum=0;
		for(i=0;i<=8;i++)
		sum=sum+a[i][j];
		if(sum!=45)
		{
		printf("\nProblem in the column %d",j);
	}
		
	}
if(sum=45)	
	printf("\nAll columns are correct");	
	getch();
}
