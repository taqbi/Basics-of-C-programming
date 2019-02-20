#include<stdio.h>
#include<conio.h>
int   main()
{
	int i,x,y,z;
	x=0;
	y=1;
	printf("%d \n %d ",x,y);
	for(i=0;i<500;i++)
	{
	z=x+y;
	printf("\n %d  ",z);
	x=y;
	y=z;	
	}
getch();

}

