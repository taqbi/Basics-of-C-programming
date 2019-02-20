#include<conio.h>
#include<stdio.h>
int main()
{
	int *p,sum=0;
	int x[5]={3,9,2,1,5};
	printf(" THE ARRAY IS ");
	for(p=x;p<=&x[4];p++)
		printf(" %d",*p);
	p=x;
	for(p=x;p<=&x[4];p++)
	{
	sum=sum+*p;
}
printf("\n SUM OF THE ELEMENTS OF THE ARRAY IS %d",sum);
getch();
}
	
