#include<stdio.h>
#include<conio.h>
#include<windows.h>
void boxes();
void display();
int getkey(int ch);
void check();
void gotoxy(short int col,short int row);

int arr[4][4]={
{1,4,15,7},
{8,10,2,11},
{4,3,6,13},
{2,9,5,0}
};
int main()
{
	int col=3,row=3,t,ch;
	boxes();
	display();
			while(1)
			{
			
				ch=getkey(ch);
				switch(ch)
				{
					case 115:
					{
					
						if(row==0)
						{
							printf("\a");
							break;
						}
						t=arr[row][col];
					arr[row][col]=arr[row-1][col];
				arr[row-1][col]	=t;
				row--;
				display();
				break;
			}
					case 113:
						{
						
						if(col==0)
						{
							printf("\a");
							break;
						}
						t=arr[row][col];
					arr[row][col]=arr[row][col-1];
				arr[row][col-1]	=t;
				col--;
				display();
				break;
			}
					case 119:
						{
						
						if(row==3)
						{
							printf("\a");
							break;
						}
						t=arr[row][col];
					arr[row][col]=arr[row+1][col];
				arr[row+1][col]	=t;
				row++;
				display();
				break;
			}
					case 97:
						{
						
						if(col==3)
						{
							printf("\a");
									break;
						}
						t=arr[row][col];
					arr[row][col]=arr[row][col+1];
				arr[row][col+1]	=t;
				col++;
				display();
				break;
			}
				case 27:
					exit(0);
					default:
						
							printf("\nU HAVE ENTERED A WRONG CHOICE");
						break;
				}
				check();
		}
		return 0;
getch();	
}
void boxes()
{
	int r,c;
	for(c=30;c<=42;c++)
	{
		for(r=8;r<=16;r+=2)
		{
	gotoxy(c,r);
		printf("%c",196);
	}
}
	for(r=8;r<=16;r++)
	{
	for(c=30;c<=42;c+=3)
	{
		gotoxy(c,r);
		printf("%c",179);	
	}		
	}
	for(c=33;c<=39;c+=3)
	{
	gotoxy(c,8);
		printf("%c",194);	
		gotoxy(c,16);
		printf("%c",193);
	}
		for(r=10;r<=14;r+=2)
	{

		gotoxy(30,r);
		printf("%c",195);
		gotoxy(42,r);
		printf("%c",180);					
	}
		for(r=10;r<=14;r+=2)
	{
	for(c=33;c<=39;c+=3)
	{
		gotoxy(c,r);
		printf("%c",197);	
	}		
	}
		gotoxy(30,8);
		printf("%c",218);
		
			gotoxy(42,8);
		printf("%c",191);
		
			gotoxy(30,16);
		printf("%c",192);
		
			gotoxy(42,16);
		printf("%c",217);				
}
void gotoxy(short int col,short int row)
{
	HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
	COORD position={col,row};
	SetConsoleCursorPosition(h,position);
}
void display()
{
	int r=9,c=31,i,j;
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=3;j++)
		{
			if(arr[i][j]==0)
			{
				gotoxy(c,r);
				printf(" ");
			}
			else
		{
			gotoxy(c,r);
			printf("%d",arr[i][j]);
		}
		c=c+3;	
		}
		r=r+2;
		c=31;
	}
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
getch();	
}
void check()
{
	static int move=0;
	int k=1,i,j;
	move++;
	gotoxy(30,24);
	printf("NUMBER OF MOVES =%d",move);
	for(i=0;i<=3;i++)
	{
		for(j=0;j<=3;j++)
		{
			if(arr[i][j]==0)
			continue;
			else
			if(arr[i][j]=k)
			k++;
			else
			return;
		}	
	}
	exit(0);
}
