#include<stdio.h>
#include<conio.h>
#include<windows.h>
int getkey(int ch);
int main()
{

	int w,i,ch,as;
	printf("                                   WELCOME TO THE TAK BI'S MIND READER");
	printf("\n   TO START ENTER ANY LETTER OF YOUR CHOICE\n");
		printf("\n\nTAKE ANY TWO DIGIT NUMBER \nADD THE DIGITS OF THE NUMBER\nSUBTRACT THE NUMBER(YOU GeT UPON ADDING THE DIGITS)FROM THE ACTUAL NUMBER.\nSEE THE PICTURE BESIDES THE NUMBER YOU GOT AFTER SUBTRACTION");
	char qw;
	printf("");
	fflush(stdin);
	scanf("%c",&qw);
	
	switch(qw)
	{
W:case 'q':
{	system( "cls" );

	for(i=1;i<105;i++)
	{
		if(i%6==0)
		{
		printf("\n");
		}
		
if(i%9==0)
		printf("    %d %c",i,2);
else
printf("    %d %c",i,i);
}
printf("\n\n\n\n\n STRIKE ENTER KEY TO SEE THE PICTURE ");
ch=getkey(ch);
if(ch==13)
printf("\n\n\nTHIS THE PICTURE  \a\a\a ");
printf("					\n\n\n		%c CAN'T BELIVE IT",2);
	printf("\nPRESS ENTER TO TRY AGAIN AND ESC TO EXIT\n");
	ch=getkey(ch);
if(ch==13)
goto A;
else if(ch==27)
exit(0);


}
break;
A:case 'w':
{	system( "cls" );

	for(i=1;i<105;i++)
	{
		
		if(i%6==0)
		{
		printf("\n");
		}
if(i%9==0)
		printf("    %d %c",i,3);
else
printf("   %d %c",i,i);
}
printf("\n\n\n\n\n STRIKE ENTER KEY TO SEE THE PICTURE ");
ch=getkey(ch);
if(ch==13)
printf("\n\n\nTHIS THE PICTURE  \a\a\a ");
printf("					\n\n\n		%c CAN'T BELIVE IT",3);
	printf("\nPRESS ENTER TO TRY AGAIN AND ESC TO EXIT\n");
	ch=getkey(ch);
if(ch==13)
goto B;
else if(ch==27)
exit(0);
}
break;
B:case 'e':
{	
system( "cls" );
	for(i=1;i<105;i++)
	{
		if(i%6==0)
		{
		printf("\n");
		}
if(i%9==0)
		printf("    %d %c",i,1);
else
printf("%d %c",i,i);	
}
printf("\n\n\n\n\n STRIKE ENTER KEY TO SEE THE PICTURE ");
ch=getkey(ch);
if(ch==13)
printf("\n\n\nTHIS THE PICTURE  \a\a\a ");
printf("					\n\n\n		%c CAN'T BELIVE IT",1);
	printf("\nPRESS ENTER TO TRY AGAIN AND ESC TO EXIT\n");
	ch=getkey(ch);
if(ch==13)
goto C;
else if(ch==27)
exit(0);
}
break;
C:case 'r':
{	system( "cls" );

	for(i=1;i<105;i++)
	{
		if(i%6==0)
		{
		printf("\n");
		}
if(i%9==0)
		printf("   %d %c",i,4);
else
printf("    %d %c",i,i);
}
printf("\n\n\n\n\n STRIKE ENTER KEY TO SEE THE PICTURE ");
ch=getkey(ch);
if(ch==13)
printf("\n\n\nTHIS THE PICTURE  \a\a\a ");
printf("					\n\n\n		%c CAN'T BELIVE IT",4);
	printf("\nPRESS ENTER TO TRY AGAIN AND ESC TO EXIT\n");
	ch=getkey(ch);
if(ch==13)
goto D;
else if(ch==27)
exit(0);
}
break;
D:case 't':
{	system( "cls" );

	for(i=1;i<105;i++)
	{
		if(i%6==0)
		{
		printf("\n");
		}
if(i%9==0)
		printf("    %d %c",i,5);
else
printf("    %d %c",i,i);	
}
printf("\n\n\n\n\n STRIKE ENTER KEY TO SEE THE PICTURE ");
ch=getkey(ch);
if(ch==13)
printf("\n\n\nTHIS THE PICTURE  \a\a\a ");
printf("					\n\n\n		%c CAN'T BELIVE IT",5);
	printf("\nPRESS ENTER TO TRY AGAIN AND ESC TO EXIT\n");
	ch=getkey(ch);
if(ch==13)
goto E;
else if(ch==27)
exit(0);
}
break;

E:case 'y':
{	
system( "cls" );
	for(i=1;i<105;i++)
	{
if(i%9==0)
		printf("   %d %c",i,6);
else
printf("   %d %c",i,i);
}
printf("\n\n\n\n\n STRIKE ENTER KEY TO SEE THE PICTURE ");
ch=getkey(ch);
if(ch==13)
printf("\n\n\nTHIS THE PICTURE  \a\a\a ");
printf("					\n\n\n		%c CAN'T BELIVE IT",6);
	printf("\nPRESS ENTER TO TRY AGAIN AND ESC TO EXIT\n");
	ch=getkey(ch);
if(ch==13)
goto F;
else if(ch==27)
exit(0);
}
break;
F:case 'u':
{	
system( "cls" );
	for(i=1;i<105;i++)
	{
if(i%9==0)
		printf("    %d %c",i,14);
else
printf("    %d %c",i,i);
}
printf("\n\n\n\n\n STRIKE ENTER KEY TO SEE THE PICTURE ");
ch=getkey(ch);
if(ch==13)
printf("\n\n\nTHIS THE PICTURE  \a\a\a ");
printf("					\n\n\n		%c CAN'T BELIVE IT",14);
	printf("\nPRESS ENTER TO TRY AGAIN AND ESC TO EXIT\n");
	ch=getkey(ch);
if(ch==13)
goto G;
else if(ch==27)
exit(0);
}
break;
G:case 'i':
{	
system( "cls" );
	for(i=1;i<105;i++)
	{
if(i%9==0)
		printf("    %d %c",i,15);
else
printf("    %d %c",i,i);	
}
printf("\n\n\n\n\n STRIKE ENTER KEY TO SEE THE PICTURE ");
ch=getkey(ch);
if(ch==13)
printf("\n\n\nTHIS THE PICTURE  \a\a\a ");
printf("					\n\n\n		%c CAN'T BELIVE IT",15);
	printf("\nPRESS ENTER TO TRY AGAIN AND ESC TO EXIT\n");
	ch=getkey(ch);
if(ch==13)
goto H;
else if(ch==27)
exit(0);
}
break;
H:case 'o':
{	system( "cls" );
	for(i=1;i<105;i++)
	{
if(i%9==0)
		printf("    %d %c",i,16);
else
printf("    %d %c",i,i);	
}
printf("\n\n\n\n\n STRIKE ENTER KEY TO SEE THE PICTURE ");
ch=getkey(ch);
if(ch==13)
printf("\n\n\nTHIS THE PICTURE  \a\a\a ");
printf("					\n\n\n		%c CAN'T BELIVE IT",16);
	printf("\nPRESS ENTER TO TRY AGAIN AND ESC TO EXIT\n");
	ch=getkey(ch);
if(ch==13)
goto I;
else if(ch==27)
exit(0);
}
break;
I:case 'p':
{	
system( "cls" );
	for(i=1;i<105;i++)
	{
if(i%9==0)
		printf("   %d %c",i,17);
else
printf("    %d %c",i,i);	
}
printf("\n\n\n\n\n STRIKE ENTER KEY TO SEE THE PICTURE ");
ch=getkey(ch);
if(ch==13)
printf("\n\n\nTHIS THE PICTURE  \a\a\a ");
printf("					\n\n\n		%c CAN'T BELIVE IT",17);
	printf("\nPRESS ENTER TO TRY AGAIN AND ESC TO EXIT\n");
	ch=getkey(ch);
if(ch==13)
goto J;
else if(ch==27)
exit(0);
}
break;
J:case 'a':
{	system( "cls" );

	for(i=1;i<105;i++)
	{
if(i%9==0)
		printf("    %d %c",i,18);
else
printf("    %d %c",i,i);	
}
printf("\n\n\n\n\n STRIKE ENTER KEY TO SEE THE PICTURE ");
ch=getkey(ch);
if(ch==13)
printf("\n\n\nTHIS THE PICTURE  \a\a\a ");
printf("					\n\n\n		%c CAN'T BELIVE IT",18);
	printf("\nPRESS ENTER TO TRY AGAIN AND ESC TO EXIT\n");
	ch=getkey(ch);
if(ch==13)
goto K;
else if(ch==27)
exit(0);
}
break;
K:case 's':
{	
system( "cls" );
	for(i=1;i<105;i++)
	{
if(i%9==0)
		printf("   %d %c",i,19);
else
printf("    %d %c",i,i);	
}
printf("\n\n\n\n\n STRIKE ENTER KEY TO SEE THE PICTURE ");
ch=getkey(ch);
if(ch==13)
printf("\n\n\nTHIS THE PICTURE  \a\a\a ");
printf("					\n\n\n		%c CAN'T BELIVE IT",19);
	printf("\nPRESS ENTER TO TRY AGAIN AND ESC TO EXIT\n");
	ch=getkey(ch);
if(ch==13)
goto L;
else if(ch==27)
exit(0);
}
break;
L:case 'd':
{	system( "cls" );
	
	for(i=1;i<105;i++)
	{
if(i%9==0)
		printf("   %d %c",i,20);
else
printf("    %d %c",i,i);	
}
printf("\n\n\n\n\n STRIKE ENTER KEY TO SEE THE PICTURE ");
ch=getkey(ch);
if(ch==13)
printf("\n\n\nTHIS THE PICTURE  \a\a\a ");
printf("					\n\n\n		%c CAN'T BELIVE IT",20);
	printf("\nPRESS ENTER TO TRY AGAIN AND ESC TO EXIT\n");
	ch=getkey(ch);
if(ch==13)
goto M;
else if(ch==27)
exit(0);
}
break;
M:case 'f':
{	system( "cls" );

	for(i=1;i<105;i++)
	{
if(i%9==0)
		printf("    %d %c",i,21);
else
printf("    %d %c",i,i);	
}
printf("\n\n\n\n\n STRIKE ENTER KEY TO SEE THE PICTURE ");
ch=getkey(ch);
if(ch==13)
printf("\n\n\nTHIS THE PICTURE  \a\a\a ");
printf("					\n\n\n		%c CAN'T BELIVE IT",21);
	printf("\nPRESS ENTER TO TRY AGAIN AND ESC TO EXIT\n");
	ch=getkey(ch);
if(ch==13)
goto N;
else if(ch==27)
exit(0);
}
break;
N:case 'g':
{	
	system( "cls" );
	for(i=1;i<105;i++)
	{
if(i%9==0)
		printf("    %d %c",i,22);
else
printf("    %d %c",i,i);	
}
printf("\n\n\n\n\n STRIKE ENTER KEY TO SEE THE PICTURE ");
ch=getkey(ch);
if(ch==13)
printf("\n\n\nTHIS THE PICTURE  \a\a\a ");
printf("					\n\n\n		%c CAN'T BELIVE IT",22);
	printf("\nPRESS ENTER TO TRY AGAIN AND ESC TO EXIT\n");
	ch=getkey(ch);
if(ch==13)
goto O;
else if(ch==27)
exit(0);
}
break;
O:case 'h':
{	
	system( "cls" );
	for(i=1;i<105;i++)
	{
if(i%9==0)
		printf("   %d %c",i,23);
else
printf("    %d %c",i,i);	
}
printf("\n\n\n\n\n STRIKE ENTER KEY TO SEE THE PICTURE ");
ch=getkey(ch);
if(ch==13)
printf("\n\n\nTHIS THE PICTURE  \a\a\a ");
printf("					\n\n\n		%c CAN'T BELIVE IT",23);
	printf("\nPRESS ENTER TO TRY AGAIN AND ESC TO EXIT\n");
	ch=getkey(ch);
if(ch==13)
goto P;
else if(ch==27)
exit(0);
}
break;
P:case 'j':
{	
system( "cls" );
	for(i=1;i<105;i++)
	{
if(i%9==0)
		printf("  %d %c",i,24);
else
printf("    %d %c",i,i);
}
printf("\n\n\n\n\n STRIKE ENTER KEY TO SEE THE PICTURE ");
ch=getkey(ch);
if(ch==13)
printf("\n\n\nTHIS THE PICTURE  \a\a\a ");
printf("					\n\n\n		%c CAN'T BELIVE IT",24);
	printf("\nPRESS ENTER TO TRY AGAIN AND ESC TO EXIT\n");
	ch=getkey(ch);
if(ch==13)
goto Q;
else if(ch==27)
exit(0);
}
break;
Q:case 'k':
{	
	system( "cls" );
	for(i=1;i<105;i++)
	{
if(i%9==0)
		printf("   %d %c",i,25);
else
printf("    %d %c",i,i);
}
printf("\n\n\n\n\n STRIKE ENTER KEY TO SEE THE PICTURE ");
ch=getkey(ch);
if(ch==13)
printf("\n\n\nTHIS THE PICTURE  \a\a\a ");
printf("					\n\n\n		%c CAN'T BELIVE IT",25);
	printf("\nPRESS ENTER TO TRY AGAIN AND ESC TO EXIT\n");
	ch=getkey(ch);
if(ch==13)
goto R;
else if(ch==27)
exit(0);
}
break;
R:case 'l':
{	system( "cls" );

	for(i=1;i<105;i++)
	{
if(i%9==0)
		printf("   %d %c",i,26);
else
printf("    %d %c",i,i);
}
printf("\n\n\n\n\n STRIKE ENTER KEY TO SEE THE PICTURE ");
ch=getkey(ch);
if(ch==13)
printf("\n\n\nTHIS THE PICTURE  \a\a\a ");
printf("					\n\n\n		%c CAN'T BELIVE IT",26);
	printf("\nPRESS ENTER TO TRY AGAIN AND ESC TO EXIT\n");
	ch=getkey(ch);
if(ch==13)
goto S;
else if(ch==27)
exit(0);
}
break;
S:case 'z':
{	system( "cls" );

	for(i=1;i<105;i++)
	{
if(i%9==0)
		printf("    %d %c",i,27);
else
printf("    %d %c",i,i);	
}
printf("\n\n\n\n\n STRIKE ENTER KEY TO SEE THE PICTURE ");
ch=getkey(ch);
if(ch==13)
printf("\n\n\nTHIS THE PICTURE  \a\a\a ");
printf("					\n\n\n		%c CAN'T BELIVE IT",27);
	printf("\nPRESS ENTER TO TRY AGAIN AND ESC TO EXIT\n");
	ch=getkey(ch);
if(ch==13)
goto T;
else if(ch==27)
exit(0);
}
break;
T:case 'x':
{	system( "cls" );
	
	for(i=1;i<105;i++)
	{
if(i%9==0)
		printf("    %d %c",i,28);
else
printf("    %d %c",i,i);	
}
printf("\n\n\n\n\n STRIKE ENTER KEY TO SEE THE PICTURE ");
ch=getkey(ch);
if(ch==13)
printf("\n\n\nTHIS THE PICTURE  \a\a\a ");
printf("					\n\n\n		%c CAN'T BELIVE IT",28);
	printf("\nPRESS ENTER TO TRY AGAIN AND ESC TO EXIT\n");
	ch=getkey(ch);
if(ch==13)
goto U;
else if(ch==27)
exit(0);
}
break;
U:case 'c':
{	
system( "cls" );
	for(i=1;i<105;i++)
	{
if(i%9==0)
		printf("    %d %c",i,29);
else
printf("   %d %c",i,i);	
}
printf("\n\n\n\n\n STRIKE ENTER KEY TO SEE THE PICTURE ");
ch=getkey(ch);
if(ch==13)
printf("\n\n\nTHIS THE PICTURE  \a\a\a ");
printf("					\n\n\n		%c CAN'T BELIVE IT",29);
	printf("\nPRESS ENTER TO TRY AGAIN AND ESC TO EXIT\n");
	ch=getkey(ch);
if(ch==13)
goto V;
else if(ch==27)
exit(0);
}
break;
V:case 'v':
{	
system( "cls" );
	for(i=1;i<105;i++)
	{
if(i%9==0)
		printf("    %d %c",i,30);
else
printf("    %d %c",i,i);	
}
printf("\n\n\n\n\n STRIKE ENTER KEY TO SEE THE PICTURE ");
ch=getkey(ch);
if(ch==13)
printf("\n\n\nTHIS THE PICTURE  \a\a\a ");
printf("					\n\n\n		%c CAN'T BELIVE IT",30);
	printf("\nPRESS ENTER TO TRY AGAIN AND ESC TO EXIT\n");
	ch=getkey(ch);
if(ch==13)
goto X;
else if(ch==27)
exit(0);
}
break;
X:case 'm':
{	
system( "cls" );
	for(i=1;i<105;i++)
	{
if(i%9==0)
		printf("  %d %c",i,32);
else
printf("    %d %c",i,i);	
}
printf("\n\n\n\n\n STRIKE ENTER KEY TO SEE THE PICTURE ");
ch=getkey(ch);
if(ch==13)
printf("\n\n\nTHIS THE PICTURE  \a\a\a ");
printf("					\n\n\n		%c CAN'T BELIVE IT",32);
	printf("\nPRESS ENTER TO TRY AGAIN AND ESC TO EXIT\n");
	ch=getkey(ch);
if(ch==13)
goto Y;
else if(ch==27)
exit(0);
}
break;
Y:case 'n':
{	system( "cls" );
	
	for(i=1;i<105;i++)
	{
if(i%9==0)
		printf("   %d %c",i,33);
else
printf("    %d %c",i,i);	
}
printf("\n\n\n\n\n STRIKE ENTER KEY TO SEE THE PICTURE ");
ch=getkey(ch);
if(ch==13)
printf("\n\n\nTHIS THE PICTURE  \a\a\a ");
printf("					\n\n\n		%c CAN'T BELIVE IT",33);
	printf("\nPRESS ENTER TO TRY AGAIN AND ESC TO EXIT\n");
	ch=getkey(ch);
if(ch==13)
goto Z;
else if(ch==27)
exit(0);
}
break;
Z:case 'b':
{	
system( "cls" );
	for(i=1;i<105;i++)
	{
if(i%9==0)
		printf("    %d %c",i,31);
else
printf("    %d %c",i,i);	
}
printf("\n\n\n\n\n STRIKE ENTER KEY TO SEE THE PICTURE ");
ch=getkey(ch);
if(ch==13)
printf("\n\n\nTHIS THE PICTURE  \a\a\a ");
printf("					\n\n\n		%c CAN'T BELIVE IT",31);
	printf("\nPRESS ENTER TO TRY AGAIN AND ESC TO EXIT\n");
	ch=getkey(ch);
if(ch==13)
goto W;
else if(ch==27)
exit(0);
}
break;
default:
	printf("");
}

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

