#include<conio.h>
#include<stdio.h>
#include<windows.h>
void gotoxy(short int col,short int row)
{
	HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
	COORD position={col,row};
	SetConsoleCursorPosition(h,position);
}
int main()
{
	
	int r=1,c;
	for(c=1;c<=12;c++)
	{
	
		
	gotoxy(c,r);
		printf("%c",205);
	}
	
	for(c=1;c<=12;c+=11)
	{
		gotoxy(c,r);
		printf("%c",186);
	}
	getch();

}
