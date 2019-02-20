#include<conio.h>
#include<stdio.h>
int main()
{
	int i,a[5],n;
	printf("ENTER THE ELEMENTS OF THE ARRAY a[]\n");
	
	for(i=0;i<=4;i++)
	{
	scanf("%d",&a[i]);
}
	printf("a[]=");
	for(i=0;i<=4;i++)
	printf("	%d",a[i]);
	printf("\nENTER THE NUMBER YOU WANT TO SEARCH\n");
 		 scanf("%d",&n);
	for(i=0;i<=4;i++)
	{
		if(a[i]==n)
		printf("%d IS AT POSITION %d",n,i);
		
	}

if(i==4)
				printf("%d IS NOT IN THE ARRAY",n);
		getch();
}
