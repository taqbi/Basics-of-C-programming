#include<conio.h>
#include<stdio.h>
int main()
{
	int *p,sum=0;
	int x[5]={3,9,2,1,5};
	printf(" THE ARRAY IS ");
	for(p=x;p<=&x[4];p++)
		printf(" %d",*p);

	printf("\nTHE REVERSE OF THE ARRAY IS");
	for(p=&x[4];p>=x;p--)
	{
printf(" %d",*p);	
}
getch();
}
	
