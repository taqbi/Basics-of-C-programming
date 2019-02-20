#include<conio.h>
#include<stdio.h>
#include<string.h>
struct student{
	char name[20];
	int id;
	float percentage;
};
int main()
{
	int i;
	struct student record[3];
record[0].id=1;
	strcpy(record[0].name,"TAKBII");
		record[0].percentage=90.0;
		
	record[1].id=1;
	strcpy(record[1].name,"UMAID");
		record[0].percentage=95.0;
		for(i=0;i<3;i++)
		{
			printf("RECORD OF STUDENT %d\n",i+1);
			printf("NAME :  %s\n",record[i].name);
				printf("ID :  %d\n", record[i].id);
					printf("PERCENTAGE :  %f\n",record[i].percentage);
					printf("\n");


		}
	
getch();
}
