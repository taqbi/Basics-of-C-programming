#include<conio.h>
#include<stdio.h>
#include<windows.h>
void gotoxy(short int col,short int row);
void boxes();
void display();

int main()
{
	int r,c;
	for(c=3;c<=80;c++)
	{
		for(r=3;r<=3;r+=2)
		{
			system("cls");
	gotoxy(c,r);
		printf("%c",2);
	}}


	getch();
}
void gotoxy(short int col,short int row)
{
	HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
	COORD position={col,row};
	SetConsoleCursorPosition(h,position);
}

