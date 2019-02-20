#include<conio.h>
#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,m,n;
char a[100],b[100],c[m+1][n+1];
printf("ENTER STRING 1");
gets(a);
printf("ENTER STRING 2");
gets(b);
m=strlen(a);
n=strlen(b);
for(i=0;i<=m;i++)
{
	c[i][0]=0;
}
for(j=1;j<=n;j++)
{
	c[0][j]=0;
}
for(i=0;i<=m;i++)
{
for(j=0;j<=n;j++)

{
if(a[i]==b[j])
c[i+1][j+1]=c[i][j]+1;
else
c[i+1][j+1]=c[i][j-1];
}
}
for(i=0;i<=m;i++)
{
for(j=0;j<=n;j++)

{
printf("%d",c[i][j]);
}
printf("\n");}
getch();
}
