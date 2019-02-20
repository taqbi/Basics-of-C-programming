#include<conio.h>
#include<stdio.h>
int su(int *,int);
int main()
{

	int a[5],i,s,sum;
	printf("enter the array elements");
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
    s=su(&a[0],5);
	printf("the sum is %d",s);
	getch();	
}
int su(int a,int n)
{
	int i,q=0;
for(i=0;i<5;i++)
{

	q=q+*j;
	j++;
}
	return(q);
}
