#include<conio.h>
#include<stdio.h>
#include<windows.h>
void gotoxy(short int col,short int row);
void boxes();
void display();

int main()
{
	boxes();
	display();


	getch();
}
void gotoxy(short int col,short int row)
{
	HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
	COORD position={col,row};
	SetConsoleCursorPosition(h,position);
}
void boxes()
{
	int r,c;
	for(c=30;c<=66;c++)
	{
		for(r=8;r<=26;r+=2)
		{
	gotoxy(c,r);
		printf("%c",196);
	}
}
	for(r=8;r<=26;r++)
	{
	for(c=30;c<=66;c+=4)
	{
		gotoxy(c,r);
		printf("%c",179);	
	}		
	}
	for(c=30;c<=63;c+=4)
	{
	gotoxy(c,8);
		printf("%c",194);	
		gotoxy(c,26);
		printf("%c",193);
	}
		for(r=10;r<=24;r+=2)
	{

		gotoxy(30,r);
		printf("%c",195);
		gotoxy(66,r);
		printf("%c",180);					
	}
		for(r=10;r<=24;r+=2)
	{
	for(c=34;c<=63;c+=4)
	{
		gotoxy(c,r);
		printf("%c",197);	
	}		
	}
		gotoxy(30,8);
		printf("%c",218);
		
			gotoxy(66,8);
		printf("%c",191);
		
			gotoxy(30,26);
		printf("%c",192);
		
			gotoxy(66,26);
		printf("%c",217);				
}
void display()
{
	int r=9,c=31,i,j,arr[18][36],m;
	for(i=0;i<=8;i++)
	{
		for(j=0;j<=8;j++)
		{
		
		{
			gotoxy(c,r);
			m=(i*10)+(j%10);
			printf("%d""%c",m+1,m+1);
		}
		c=c+4;	
		}
		r=r+2;
		c=31;
	}
}
