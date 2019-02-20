#include<conio.h>
#include<stdio.h>
int main()
{
	int a[10],i,j,temp;
	printf("ENTER THE ELEMENTS OF THE ARRAY\n");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
		printf("\n THE UNSORTED ARRAY IS\n");
		for(i=0;i<10;i++)
		printf(" %d",a[i]);	
	for(i=0;i<10;i++)
	{
for(j=i+1;j<10;j++)
	{
	if(a[j]<a[i])
	{
		temp=a[j];
		a[j]=a[i];
		a[i]=temp;
	}
	}
}
	printf("\n THE SORTED ARRAY IS\n");
	for(i=0;i<10;i++)
		printf(" %d",a[i]);	
	getch();
}	
