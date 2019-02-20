#include<conio.h>
#include<stdio.h>
void swap(int *p1,int *p2);
int main()
{
	int a,b,*p1=&a,*p2=&b;
	
	printf("enter two numbers");
	scanf("%d %d",&a,&b);
	swap(&a,&b);
	printf("values after swap are %d %d",*p1,*p2);
	getch();
}
 void swap(int *p1,int *p2)
{
	int z;
	z=*p1;
	*p1=*p2;
	*p2=z;
}
