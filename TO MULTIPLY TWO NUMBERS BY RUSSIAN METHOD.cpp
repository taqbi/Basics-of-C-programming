#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,x,y,s=0;
	printf("enter  two numbers to be multiplied: ");
	scanf("%d%d",&x,&y);
	a=x;
	b=y;
	while(a>=1)
	 { 
	    if(a%2!=0)
	      s=s+b;
	    a=a/2;
	    b=b*2;
     }
		printf("%d * %d =%d\n",x,y,s);	
	 getch();
}
