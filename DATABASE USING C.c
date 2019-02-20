#include<conio.h>
#include<stdio.h>
/*#include<system.h>*/
#include<string.h>
#include<stdlib.h>
int main()
{
	FILE *fp,*ft;
	char another,choice;
	struct emp{
		char nae[40];
		int age;
		 float bs;
		  
	};	
	struct emp e;
	char empname[40];
	long int recsize;
	fp=fopen("EMP.DAT","rb+");
	if(fp==NULL)
{
	fp=fopen("EMP.DAT","wb+");
	if(fp==NULL)
	{
		puts("cannot open file");
		exit(1);
		
	}
}
	
	recsize=sizeof(e);
	while(1)
{
	system("cls");
	gotoxy(30,10);
	printf("1.ADD RECORDS");
	gotoxy(30,12);
	printf("2.LIST RECORDS");
	gotoxy(30,14);
	
}

getch();
}
