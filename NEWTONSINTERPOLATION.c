#include<conio.h>
#include<stdio.h>
int main()
{
	float u,px,x[8],y[8][8],x1;
	int i,j;
	
	
	
			for(i=0;i<=7;i++)
	{
		for(j=0;j<=7;j++)
		{
			y[i][j]=0;
		}
	}
	
	
	
	printf("ENTER THE VALUES OF X\n");
	for(i=0;i<=7;i++)
	{
	scanf("%f",&x[i]);
	}
	
	
		printf("ENTER THE VALUES OF Y\n");
	for(i=0;i<=7;i++)
	{
		
	scanf("%f",&y[0][i]);
	}
	


	for(i=0;i<=7;i++)
	{
		printf("X%d  =  %f\n",i,x[i]);
	}
	printf("\n");
	for(i=0;i<=7;i++)
	{
		printf("Y%d  =  %f\n",i,y[0][i]);
	}
	

	

do
	{
	for(i=1;i<=8;i++)	
	{
	for(j=1;j<=8-1;j++)	
	y[i][j]	=y[i-1][j+1]-y[i-1][j];
		
	}

}
while((y[1][1]||y[2][1]||y[3][1]||y[4][1]||y[5][1]||y[6][1]||y[7][1])!=0.0);
	
	
	printf("ENTER THE VALUE OF X AT WHICH  YOU WANT TO FIND THE VALUE OF Y");
	scanf("%f",&x1);
	u=(x1-x[0])/(x[1]-x[0]);
	px=y[0][0]+(u*y[1][0])+((u*(u-1)*(y[2][0]))/2)+((u*(u-1)*(u-2)*y[3][0])/6);
	printf(" \nTHE VALUE OF Y AT X=%f is  %f",x1,px);
	getch();
	
}
