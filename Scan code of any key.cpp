#include<conio.h>
#include<stdio.h>
#include<windows.h>
int getkey(int ch);
int main()

{
	int ch;
A:	printf("enter any key");
	
	ch=getkey(ch);

printf("the scan code is %d",ch);
printf("\n\n\n\n\n\n\n\n\nSTRIKE ENTER KEY TO CONTINUE AND ESC KEY TO EXIT");
ch=getkey(ch);
if(ch==13)
goto A;
if(ch==27)
exit(0);
	getch();
}
int getkey(int ch)
{

	ch=getch();
	if(ch==0)
	{
		ch=getch();
		return ch;
}
	return ch;
}

