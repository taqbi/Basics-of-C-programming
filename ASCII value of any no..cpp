#include<stdio.h>
#include<conio.h>
#include<windows.h>
int main()
{
A:	int a,ch;
	printf("enter any number");
	scanf("%d",&a);
	printf(" %c\n",a);
	printf("PRESS ENTER TO CONTINUE ESC TO EXIT\n");
	ch=getch();
	if(ch==27)
exit(0);
else if(ch==13)
goto A;
	
	getch();
}
int getkey(int c)
{

	c=getch();
	if(c==0)
	{
		c=getch();
		return c;
	}
	return c;
	
}


