#include<conio.h>
#include<stdio.h>
int main()
{
	int i,j,k=0,a[5],b[5],c[10];
	printf("ENTER THE ELEMENTS OF THE ARRAY ONE\n");
	for(i=0;i<=4;i++);
	{
	scanf("%d",&a[i]);
}

		printf("ENTER THE ELEMENTS OF THE ARRAY TWO\n");
	for(j=0;j<5;j++);
	{
	scanf("%d",&b[j]);
}

		for(i=0;i<4;i++)
		c[i]=a[i];
			for(j=1;j<6;j++)
			c[i+j]=b[j];
			printf("THE CONCATENATED ARRAY IS ");
		for(k=0;k<=9;k++)
	printf("%d",c[k]);
	getch();
}
