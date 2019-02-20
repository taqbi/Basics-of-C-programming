#include<conio.h>
#include<stdio.h>
int main()
{
	int ch;
	FILE *fp;
		fp=fopen("half girlfriend.pdf","r");
		
	if(fp==NULL)
	printf("CANNOT OPEN THE FILE");
	while(1)
	{
		ch=getc(fp);
		if(ch==EOF)
		break;
		printf("%c",ch);
	}
	fclose(fp);
	getch();
	
	
}
