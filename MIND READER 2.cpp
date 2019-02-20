#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	float al;
printf("TAKE SOME AMOUNT OF MONEY\nBORROW THE SAME AMOUNT OF MONEY FROM YOUR FRIEND\n\n\n\nENTER THE AMOUNT YOU WANT TO TAKE FROM ME");
scanf("%d",&a);
printf("ADD UP THE WHOLE AMOUNT\n\nGIVE HALF OF THE TOTAL AMOUNT IN CHARITY AND YOUR FRIEND HIS AMOUNT BACK\n\n\n");
if(a%2==0)
{

al=a/2;
printf("RS %f IS  LEFT IN YOUR HANDS\nTHANKS VISIT AGAIN\a\a\a",al);
}
if(a%2!=0)
{

al=a/2+0.5;	
printf("RS %f WILL BE LEFT IN YOUR HAND\nTHANKS VISIT AGAIN\a\a\a",al);
}
	getch();
}
