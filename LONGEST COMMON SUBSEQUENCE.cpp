/* program for longest common subsequence */
#include<conio.h>
#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,m,n,d[m][n],c[m+1][n+1];
char a[100],b[100];
printf("ENTER STRING 1");
gets(a);
printf("ENTER STRING 2");
gets(b);
m=strlen(a);
n=strlen(b);
for(i=1;i<=m;i++)
{
	c[i][0]=0;
}
for(j=0;j<=n;j++)
{
	c[0][j]=0;
}

for(i=1;i<=m;i++)
{
	for(j=1;j<=n;j++)
	{

	if(a[i]==b[j])
	{
	c[i][j]=c[i-1][j-1]+1;
	d[i][j]=92;
		}
	else if(c[i-1][j]>=c[i][j-1])
	{
		c[i][j]=c[i-1][j];
		d[i][j]=24;
		
	}
	else
	{
		c[i][j]=c[i][j-1];
		d[i][j]=27;
	}

}
}
for(i=0;i<=m;i++)
{
for(j=0;j<=n;j++)
{
	printf("%d\t",c[i][j]);
}
printf("\n");
}
for(i=1;i<=m;i++)
{

for(j=1;j<=n;j++)
{
	fflush(stdin);
	printf("%c\t",d[i][j]);
}
printf("\n");
}
getch();
}
