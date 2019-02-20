#include<conio.h>
#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char name[7],nname[7];
	printf("ENTER THE NAME");
fflush(stdin);
scanf("%s",&name);
	printf("ENTER THE NNAME");
fflush(stdin);
scanf("%s",&nname);
i=strcmp(name,nname);
printf("THE DIFFEENCE IS %d",i);
getch();
}
