#include<conio.h>
#include<stdio.h>
#include<math.h>
void a(int num,char from,char aux, char to);
int main()
{
	int disk,moves,num;

	printf("ENTER THE NUMBER OF PLATES YOU WANT TO PLAY WITH");
	scanf("%d",&disk);
	moves=pow(2,disk)-1;
	
	printf("The no of moves required=%d\n",moves);
	a(disk,'A','B','C');
getch();
}
void a(int num,char from,char aux, char to)
{
	if(num==1)
	printf("MOVE DISC %d FROM %c to %c",num,from,to);
	else
	{
		a(num-1,from,to,aux);
			printf("\nMOVE DISC %d FROM %c to %c\n",num,from,to);
				a(num-1,aux,from,to);
	}

}
