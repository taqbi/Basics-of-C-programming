#include<conio.h>
#include<stdio.h>
int fib(int);

int main()
{
	int n,i,c,f;
	printf("ENTER THE NO. OF TERMS");
	scanf("%d",&n);
	for(c=0;c<=n;c++)
	{
		f=fib(i);
		printf("%d\n",f);
		i++;
	}
	getch();
}
int fib(int n)
{

	if(n==0)
	return 0;
	else if(n==1)
	return 1;
	else
	return(fib(n-1)+fib(n-2));
}
