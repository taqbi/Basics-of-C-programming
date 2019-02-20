#include<conio.h>
#include<stdio.h>
int main()
{
	int *p,sum=0,i;
	int x[5]={3,9,2,1,5};
	p=x;
	printf("ELEMENT			VALUE			ADRESS\n");
	for(i=0;i<=4;i++)
	{
	printf("x[%d]			%d			%u\n",i,*p,p);
	sum=sum+*p;
	p++;
}
printf("SUM OF THE ELEMENTS OF THE ARRAY IS %d",sum);
printf("\np=%u",p);
getch();
}
	
