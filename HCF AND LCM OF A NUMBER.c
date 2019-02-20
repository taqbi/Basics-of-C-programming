#include<conio.h>
#include<stdio.h>
long gcd(int a,int b)
{
if(a==0)
return b;
while(b!=0)
{
	if(a>b)
	a=a-b;
	else
b=b-a;
}
return a;
}
int main()
{
	long hcf,lcm;
	int a,b;
	printf("ENTER THE TWO NUMBERS");
	scanf("%d 	%d",&a,&b);
	hcf=gcd(a,b);
	lcm=a*b/hcf;
	printf("THE HCF IS %ld AND LCM IS %ld ",hcf,lcm);
	getch();
}
