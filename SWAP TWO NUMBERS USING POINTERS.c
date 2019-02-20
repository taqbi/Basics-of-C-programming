#include<conio.h>
#include<stdio.h>
void swap(int *x,int *y);
int main()
{
	int a,b;
printf("ENTER THE TWO NUMBERS");
scanf("%d %d",&a,&b);
printf("VALUES BEFORE SWAPPING ARE a=%d  AND b=%d",a,b);
swap(&a,&b);
	getch();
}
void swap(int *x,int *y)
{
	int z;
	z=*x;
	*x=*y;
	*y=z;
	printf("VALUES AFTER SWAPPING ARE a=%d AND b=%d",*x,*y);

}
