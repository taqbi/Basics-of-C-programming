#include<stdio.h>
#include<conio.h>


int main()

{
char mt[10],ot[10],i,c,p,x,l,b;
int score=0,wickets=0,o,wl,rn,q,t,w,ol;
printf("ENTER THE NAME OF YOUR TEAM  ");
fflush(stdin);
gets(mt);
 printf("ENTER THE NAME OF OPPOSITE TEAM  ");
 fflush(stdin);
 gets(ot);
 printf("enter no. of overs");
 scanf("%d",&q);
 
  printf("\n\nwelcome to the %d-%d over match b/w ",q,q);
  puts(mt);
  printf(" and ");
  puts(ot);
  printf("\n Team");
  puts(ot);
  printf(" won the toss and elected to bat first");
  printf("\nEnter the runs you want to chase");
  scanf("%d",&t);
  w=t+1;
  printf("\n\nTeam ");
  puts(ot);
  printf("scored %d runs in %d overs you need %d runs to win",t,q,w);
 for(o=1;o<=q;o++ && score<t &&wickets<10)
 {
 if(score>=t || wickets==10)
 break;
 if(o%3==0)
 {
    	if(score>=t || wickets==10)
 		break;
    printf("\n1st ball of over %d is SHORT ON MIDDLE AND LEG \n press c for cover drive \n p for pull\n x to cut \n l to leave,\nb for bowlers back drive",o);
  fflush(stdin);
scanf("%c",&i);
 switch(i)
   {
 	case 'c':
 		{
 		
 		printf("YOU ARE HIT ON THE RIB NO RUN");
 	score=score+0;
 	wickets=wickets+0;
 	printf("\nSCORE %d-%d",score,wickets);
 	rn=t-score;
wl=10-wickets;
 	}
 		break;
 		case'p':
 			{
 			
 			printf("MAGNIFICENT SHOT OVER THE DEEP FIELDER FOR SIX \a\a\a\a\a.");
 				
 	score=score+6;
 	wickets=wickets+0;
 	printf("\nSCORE %d-%d",score,wickets);
 rn=t-score;
wl=10-wickets;	
 	}
 		break;
 			case'x':
 				{
 				
 				printf("YOU ARE HIT ON THE RIB NO RUN.");
 		score=score+0;
		 wickets= wickets+0;	
 			printf("\nSCORE %d-%d",score,wickets);
 		rn=t-score;
wl=10-wickets;	
 		}
 			break;
 			case 'l':
 				{
 				
 					printf("YOU ARE HIT ON THE RIB NO RUN.");
 			score=score+0;
		 wickets= wickets+0;
		 	printf("\nSCORE %d-%d",score,wickets);
		 rn=t-score;
wl=10-wickets;	
		}
	 break;
	  	case 'b':
 				{
 				
 					printf("YOU ARE HIT ON THE RIB NO RUN");
 			score=score+0;
		 wickets= wickets+0;
		 	printf("\nSCORE %d-%d",score,wickets);
		rn=t-score;
wl=10-wickets; 	
		}
	 break;
		 default:
		 printf("wrong choice"); 
		 break; 
   }
 
   	if(score>=t || wickets==10)
 		break;
       printf("\n\n2nd ball of over %d is ON THE PADS \n press c for COVER DRIVE \n p for PULL\n x to CUT \n ,\nb for BOWLERS BACK DRIVE,\n f for FLICK",o);
  fflush(stdin);
scanf("%c",&i);
 switch(i)
   {
 	case 'c':
 		{
 		
 		printf("BALL WRAPS ON THE PAD THERE IS A LOUD APPEAL BUT NOT OUT SAYS THE UMPIRE");
 	score=score+0;
 	wickets=wickets+0;
 		printf("\nSCORE %d-%d",score,wickets);
 	rn=t-score;
wl=10-wickets;	
}
 		break;
 		case'p':
 			{
 			
 			printf("BALL WRAPS ON THE PAD THERE IS A LOUD APPEAL BUT NOT OUT SAYS THE UMPIRE");
 				
 		score=score+0;
 	wickets=wickets+0;
 		printf("\nSCORE %d-%d",score,wickets);
 	rn=t-score;
wl=10-wickets;	
 	}
 		break;
 			case'x':
 				{
 				
 				printf("BALL WRAPS ON THE PAD THERE IS A LOUD APPEAL BUT NOT OUT SAYS THE UMPIRE");
 				
 		score=score+0;
 	wickets=wickets+0;
 		printf("\nSCORE %d-%d",score,wickets);
 	rn=t-score;
wl=10-wickets;	
	}
 		break;
 		case 'b':
 			{
 			
 		printf("BALL WRAPS ON THE PAD THERE IS A LOUD APPEAL BUT NOT OUT SAYS THE UMPIRE");
 				
 	score=score+0;
 	wickets=wickets+0;
 		printf("\nSCORE %d-%d",score,wickets);
		rn=t-score;
wl=10-wickets; 
		 }	
 		break;
 		case 'f':
 			{
 			
 		printf("NICE SHORT TOWARDS DEEP THIRDMAN FOR 1 RUN ");
 				
 	score=score+1;
 	wickets=wickets+0;
 		printf("\nSCORE %d-%d",score,wickets);
		rn=t-score;
wl=10-wickets; 
		 }	
 		break;	
		 default:
		 printf("wrong choice"); 
		 break;    
}
	if(score>=t||wickets>=10)
 		break;

       printf("\n3rd ball of over %d is just short outside the off stump \n press c for cover drive \n p for pull\n x to cut \n \nb for bowlers back drive",o);
  fflush(stdin);
scanf("%c",&i);
 switch(i)
   {
 	case 'c':
 		{
 		
 		printf("u missed the ball no run");
 	score=score+0;
 	wickets=wickets+0;
 		printf("\nSCORE %d-%d",score,wickets);
 		rn=t-score;
wl=10-wickets;
}
 		break;
 		case'p':
 			{
 			
 			printf("u missed the ball no run");
 				
 		score=score+0;
 	wickets=wickets+0;
 		printf("\nSCORE %d-%d",score,wickets);
 	rn=t-score;
wl=10-wickets;	
 	}
 		break;
 			case'x':
 				{
 				
 				printf("good short towards deep point for 1 run");
 				
 		score=score+1;
 	wickets=wickets+0;
 		printf("\nSCORE %d-%d",score,wickets);
 		rn=t-score;
wl=10-wickets;
	}
 		break;
 		case 'b':
 			{
 			
 		printf("u missed the ball no run");
 				
 	score=score+0;
 	wickets=wickets+0;
 		printf("\nSCORE %d-%d",score,wickets);
 	rn=t-score;
wl=10-wickets;	
	}
 		break;
		 default:
		 printf("wrong choice"); 
		 break; 
   }
  	if(score>=t || wickets==10)
 		break; 
   printf("\n\n4th ball of over %d is full on middle stump \n press c for on drive \n p for pull\n x to cut \n l to leave ",o);
  fflush(stdin);
scanf("%c",&i);
 switch(i)
   {
 	case 'c':
 		{
 		
 		printf("GOOD SHOT TO THE LONG ON FOR TWO RUNS.");
 		score=score+2;
 		wickets=wickets+0;
 		printf("\nSCORE %d-%d",score,wickets);
 	rn=t-score;
wl=10-wickets;	
 	}
 		break;
 		case'p':
 			{
 		
 			printf("THE WRAPPED ON YOUR PAD AND YOU ARE OUT LBW\a.");
 				score=score+0;
 		wickets=wickets+1;
 		printf("\nSCORE %d-%d",score,wickets);
 	rn=t-score;
wl=10-wickets;	
 	}
 			break;
 			case'x':
 				{
 				
 				printf("you missed the ball AND YOU ARE BOWLED\a.");
 					score=score+0;
 		wickets=wickets+1;
 		printf("\nSCORE %d-%d",score,wickets);
 	rn=t-score;
wl=10-wickets;	
 		
 	}
 				break;
 				case'l':
 					{
 					
 					printf("you missed the ball AND YOU ARE BOWLED\a.");
 					score=score+0;
 		wickets=wickets+1;
 		printf("\nSCORE %d-%d",score,wickets);
 	rn=t-score;
wl=10-wickets;	
}
 		break;
		 default:
		 printf("wrong choice"); 
		 break; 
   }
   	if(score>=t || wickets==10)
 		break;
   printf("\n\n5th ball of over %d is good length outside off \n press c for cover drive \n p for pull\n x to cut \n ",o);
  fflush(stdin);
scanf("%c",&i);
 switch(i)
   {
 	case 'c':
 		{
 		
 		printf("brilliant drive it is a four\a\a.");
 		score=score+4;
 		wickets=wickets+0;
 		printf("\nSCORE %d-%d",score,wickets);
 	rn=t-score;
wl=10-wickets;	
 	
 	}
 		break;
 		case'p':
 			{
 		
 			printf("you missed the ball.");
 				score=score+0;
 		wickets=wickets+0;
 			printf("\nSCORE %d-%d",score,wickets);
 	rn=t-score;
wl=10-wickets;		
 			
 	}
 			break;
 			case'x':
 				{
 				
 				printf("you missed the ball.");
 					score=score+0;
 		wickets=wickets+0;
 			printf("\nSCORE %d-%d",score,wickets);
 			rn=t-score;
wl=10-wickets;
 		}
 				break;
 				case'l':
 					{
 					
 					printf("GOOD LEAVE.");
 					score=score+0;
 		wickets=wickets+0;
 			printf("\nSCORE %d-%d",score,wickets);
 			rn=t-score;
wl=10-wickets;
 		}
 		break;
		 default:
		 printf("wrong choice"); 
		 break; 
   }
   	if(score>=t || wickets==10)
 		break;
 
    printf("\nlast ball of over %d is york on middle stump \n press c for cover drive \n p for pull\n x to cut \n l to leave,\nb for bowlers back drive",o);
  fflush(stdin);
scanf("%c",&i);
 switch(i)
   {
 	case 'c':
 		{
 		
 		printf("out.u r lbw out");
 	score=score+0;
 	wickets=wickets+1;
 	printf("\nSCORE %d-%d",score,wickets);
 	rn=t-score;
wl=10-wickets;
 	}
 		break;
 		case'p':
 		{
 			
 			printf("out.u r bowled\a.");
 				
 	score=score+0;
 	wickets=wickets+1;
 	printf("\nSCORE %d-%d",score,wickets);
 	rn=t-score;
wl=10-wickets;
 	}
 		break;
 			case'x':
 				{
 				
 				printf("out.u r bowled\a.");
 		score=score+0;
		 wickets= wickets+1;	
 			printf("\nSCORE %d-%d",score,wickets);
 		rn=t-score;
wl=10-wickets;	
 		}
 			break;
 			case 'l':
 				{
 				
 					printf("out.u r bowled\a.");
 			score=score+0;
		 wickets= wickets+1;
		 	printf("\nSCORE %d-%d",score,wickets);
	rn=t-score;
wl=10-wickets;	 	
		}
	 break;
	 	case 'b':
 				{
 				
 					printf("tremendous bowlers back drive for four runs\a\a");
 			score=score+4;
		 wickets= wickets+0;
		 	printf("\nSCORE %d-%d",score,wickets);
		 rn=t-score;
wl=10-wickets;	
		}
	 break;
		 default:
		 printf("\nwrong choice"); 
		 break; 
   }
  printf("\nEnd of over%d\nSCORE %d-%d",o,score,wickets);
rn=w-score;
wl=10-wickets;
ol=q-o;
printf("\nyou need %d runs from %d overs with %d wickets in hand",rn,ol,wl);  	
 }
 else if(c%2==0)
 {
 	
  printf("\n\n1st ball of over %d is good length outside off \n press c for cover drive \n p for pull\n x to cut \n l to leave",o);
  fflush(stdin);
scanf("%c",&i);
 switch(i)
   {
 	case 'c':
 		{
 		
 		printf("brilliant drive it is a four\a\a.");
 		score=score+4;
 		wickets=wickets+0;
 		printf("\nSCORE %d-%d",score,wickets);
 	rn=t-score;
wl=10-wickets;	
 	
 	}
 		break;
 		case'p':
 			{
 		
 			printf("you missed the ball.");
 				score=score+0;
 		wickets=wickets+0;
 			printf("\nSCORE %d-%d",score,wickets);
 	rn=t-score;
wl=10-wickets;		
 			
 	}
 			break;
 			case'x':
 				{
 				
 				printf("you missed the ball.");
 					score=score+0;
 		wickets=wickets+0;
 			printf("\nSCORE %d-%d",score,wickets);
 			rn=t-score;
wl=10-wickets;
 		}
 				break;
 				case'l':
 					{
 					
 					printf("GOOD LEAVE.");
 					score=score+0;
 		wickets=wickets+0;
 			printf("\nSCORE %d-%d",score,wickets);
 			rn=t-score;
wl=10-wickets;
 		}
 		break;
		 default:
		 printf("wrong choice"); 
		 break; 
   }
   	if(score>=t || wickets==10)
 		break;
 
    printf("\n2nd ball of over %d is york on middle stump \n press c for cover drive \n p for pull\n x to cut \n l to leave,\nb for bowlers back drive",o);
  fflush(stdin);
scanf("%c",&i);
 switch(i)
   {
 	case 'c':
 		{
 		
 		printf("out.u r lbw out\a");
 	score=score+0;
 	wickets=wickets+1;
 	printf("\nSCORE %d-%d",score,wickets);
 	rn=t-score;
wl=10-wickets;
 	}
 		break;
 		case'p':
 		{
 			
 			printf("out.u r bowled\a.");
 				
 	score=score+0;
 	wickets=wickets+1;
 	printf("\nSCORE %d-%d",score,wickets);
 	rn=t-score;
wl=10-wickets;
 	}
 		break;
 			case'x':
 				{
 				
 				printf("out.u r bowled\a.");
 		score=score+0;
		 wickets= wickets+1;	
 			printf("\nSCORE %d-%d",score,wickets);
 		rn=t-score;
wl=10-wickets;	
 		}
 			break;
 			case 'l':
 				{
 				
 					printf("out.u r bowled\a.");
 			score=score+0;
		 wickets= wickets+1;
		 	printf("\nSCORE %d-%d",score,wickets);
	rn=t-score;
wl=10-wickets;	 	
		}
	 break;
	 	case 'b':
 				{
 				
 					printf("tremendous bowlers back drive for four runs\a\a");
 			score=score+4;
		 wickets= wickets+0;
		 	printf("\nSCORE %d-%d",score,wickets);
		 rn=t-score;
wl=10-wickets;	
		}
	 break;
		 default:
		 printf("\nwrong choice"); 
		 break; 
   }
   	if(score>=t || wickets==10)
 		break;
       printf("\n3rd ball of over %d is just short outside the off stump \n press c for cover drive \n p for pull\n x to cut \n l to leave,\nb for bowlers back drive",o);
  fflush(stdin);
scanf("%c",&i);
 switch(i)
   {
 	case 'c':
 		{
 		
 		printf("u missed the ball no run");
 	score=score+0;
 	wickets=wickets+0;
 		printf("\nSCORE %d-%d",score,wickets);
 		rn=t-score;
wl=10-wickets;
}
 		break;
 		case'p':
 			{
 			
 			printf("u missed the ball no run");
 				
 		score=score+0;
 	wickets=wickets+0;
 		printf("\nSCORE %d-%d",score,wickets);
 	rn=t-score;
wl=10-wickets;	
 	}
 		break;
 			case'x':
 				{
 				
 				printf("good short towards deep point for 1 run");
 				
 		score=score+1;
 	wickets=wickets+0;
 		printf("\nSCORE %d-%d",score,wickets);
 		rn=t-score;
wl=10-wickets;
	}
 		break;
 		case 'b':
 			{
 			
 		printf("u missed the ball no run");
 				
 	score=score+0;
 	wickets=wickets+0;
 		printf("\nSCORE %d-%d",score,wickets);
 	rn=t-score;
wl=10-wickets;	
	}
 		break;
		 default:
		 printf("wrong choice"); 
		 break; 
   }
  	if(score>=t || wickets==10)
 		break; 
   printf("\n\n4th ball of over %d is full on middle stump \n press c for on drive \n p for pull\n x to cut \n l to leave",o);
  fflush(stdin);
scanf("%c",&i);
 switch(i)
   {
 	case 'c':
 		{
 		
 		printf("GOOD SHOT TO THE LONG ON FOR TWO RUNS.");
 		score=score+2;
 		wickets=wickets+0;
 		printf("\nSCORE %d-%d",score,wickets);
 	rn=t-score;
wl=10-wickets;	
 	}
 		break;
 		case'p':
 			{
 		
 			printf("THE WRAPPED ON YOUR PAD AND YOU ARE OUT LBW\a.");
 				score=score+0;
 		wickets=wickets+1;
 		printf("\nSCORE %d-%d",score,wickets);
 	rn=t-score;
wl=10-wickets;	
 	}
 			break;
 			case'x':
 				{
 				
 				printf("you missed the ball AND YOU ARE BOWLED\a.");
 					score=score+0;
 		wickets=wickets+1;
 		printf("\nSCORE %d-%d",score,wickets);
 	rn=t-score;
wl=10-wickets;	
 		
 	}
 				break;
 				case'l':
 					{
 					
 					printf("you missed the ball AND YOU ARE BOWLED\a.");
 					score=score+0;
 		wickets=wickets+1;
 		printf("\nSCORE %d-%d",score,wickets);
 	rn=t-score;
wl=10-wickets;	
}
 		break;
		 default:
		 printf("wrong choice"); 
		 break; 
   }
   	if(score>=t || wickets==10)
 		break;
    printf("\n5th ball of over %d is SHORT ON MIDDLE AND LEG \n press c for cover drive \n p for pull\n x to cut \n l to leave,\nb for bowlers back drive",o);
  fflush(stdin);
scanf("%c",&i);
 switch(i)
   {
 	case 'c':
 		{
 		
 		printf("YOU ARE HIT ON THE RIB NO RUN");
 	score=score+0;
 	wickets=wickets+0;
 	printf("\nSCORE %d-%d",score,wickets);
 	rn=t-score;
wl=10-wickets;
 	}
 		break;
 		case'p':
 			{
 			
 			printf("MAGNIFICENT SHOT OVER THE DEEP FIELDER FOR SIX\a\a\a\a\a .");
 				
 	score=score+6;
 	wickets=wickets+0;
 	printf("\nSCORE %d-%d",score,wickets);
 rn=t-score;
wl=10-wickets;	
 	}
 		break;
 			case'x':
 				{
 				
 				printf("YOU ARE HIT ON THE RIB NO RUN.");
 		score=score+0;
		 wickets= wickets+0;	
 			printf("\nSCORE %d-%d",score,wickets);
 		rn=t-score;
wl=10-wickets;	
 		}
 			break;
 			case 'l':
 				{
 				
 					printf("YOU ARE HIT ON THE RIB NO RUN.");
 			score=score+0;
		 wickets= wickets+0;
		 	printf("\nSCORE %d-%d",score,wickets);
		 rn=t-score;
wl=10-wickets;	
		}
	 break;
	  	case 'b':
 				{
 				
 					printf("YOU ARE HIT ON THE RIB NO RUN");
 			score=score+0;
		 wickets= wickets+0;
		 	printf("\nSCORE %d-%d",score,wickets);
		rn=t-score;
wl=10-wickets; 	
		}
	 break;
		 default:
		 printf("wrong choice"); 
		 break; 
   }
   	if(score>=t || wickets==10)
 		break;
       printf("\n\nlast ball of over %d is ON THE PADS \n press c for COVER DRIVE \n p for PULL\n x to CUT \n \nb for BOWLERS BACK DRIVE,\n f for FLICK",o);
  fflush(stdin);
scanf("%c",&i);
 switch(i)
   {
 	case 'c':
 		{
 		
 		printf("BALL WRAPS ON THE PAD THERE IS A LOUD APPEAL BUT NOT OUT SAYS THE UMPIRE");
 	score=score+0;
 	wickets=wickets+0;
 		printf("\nSCORE %d-%d",score,wickets);
 	rn=t-score;
wl=10-wickets;	
}
 		break;
 		case'p':
 			{
 			
 			printf("BALL WRAPS ON THE PAD THERE IS A LOUD APPEAL BUT NOT OUT SAYS THE UMPIRE");
 				
 		score=score+0;
 	wickets=wickets+0;
 		printf("\nSCORE %d-%d",score,wickets);
 	rn=t-score;
wl=10-wickets;	
 	}
 		break;
 			case'x':
 				{
 				
 				printf("BALL WRAPS ON THE PAD THERE IS A LOUD APPEAL BUT NOT OUT SAYS THE UMPIRE");
 				
 		score=score+0;
 	wickets=wickets+0;
 		printf("\nSCORE %d-%d",score,wickets);
 	rn=t-score;
wl=10-wickets;	
	}
 		break;
 		case 'b':
 			{
 			
 		printf("BALL WRAPS ON THE PAD THERE IS A LOUD APPEAL BUT NOT OUT SAYS THE UMPIRE");
 				
 	score=score+0;
 	wickets=wickets+0;
 		printf("\nSCORE %d-%d",score,wickets);
		rn=t-score;
wl=10-wickets; 
		 }	
 		break;
 		case 'f':
 			{
 			
 		printf("NICE SHORT TOWARDS DEEP THIRDMAN FOR 1 RUN ");
 				
 	score=score+1;
 	wickets=wickets+0;
 		printf("\nSCORE %d-%d",score,wickets);
		rn=t-score;
wl=10-wickets; 
		 }	
 		break;	
		 default:
		 printf("wrong choice"); 
		 break;    
}
	if(score>=t)
 		break;
printf("\nEnd of over%d\nSCORE %d-%d",o,score,wickets);
rn=w-score;
wl=10-wickets;
ol=q-o;
printf("\nyou need %d runs from %d overs with %d wickets in hand",rn,ol,wl);
}

else
{

 

 	printf("THERE IS A CHANGE IN THE BOWLING .A SPINNER COMES INTO THE ATTACK");
 
  printf("\n\n1st ball of over %d  pitches on the middle stump short and drifts away from the batsman \n press c for cover drive \n p for pull\n x to cut \n l to leave",o);
  fflush(stdin);
scanf("%c",&i);
 switch(i)
   {
 	case 'c':
 		{
 		
 		printf("the ball hits high on the bat straight to short cover no run\a\a.");
 		score=score+0;
 		wickets=wickets+0;
 		printf("\nSCORE %d-%d",score,wickets);
 	rn=t-score;
wl=10-wickets;	
 	
 	}
 		break;
 		case'p':
 			{
 		
 			printf("you missed the ball.");
 				score=score+0;
 		wickets=wickets+0;
 			printf("\nSCORE %d-%d",score,wickets);
 	rn=t-score;
wl=10-wickets;		
 			
 	}
 			break;
 			case'x':
 				{
 				
 				printf("good short towards the deep point for a single.");
 					score=score+1;
 		wickets=wickets+0;
 			printf("\nSCORE %d-%d",score,wickets);
 			rn=t-score;
wl=10-wickets;
 		}
 				break;
 				case'l':
 					{
 					
 					printf("GOOD LEAVE.");
 					score=score+0;
 		wickets=wickets+0;
 			printf("\nSCORE %d-%d",score,wickets);
 			rn=t-score;
wl=10-wickets;
 		}
 		break;
		 default:
		 printf("wrong choice"); 
		 break; 
   }
   	if(score>=t || wickets==10)
 		break;
 
    printf("\n2nd ball of over %d is over pitched on the off stump  \n press c for cover drive \n p for pull\n x to cut \n l to leave,\nb for bowlers back drive",o);
  fflush(stdin);
scanf("%c",&i);
 switch(i)
   {
 	case 'c':
 		{
 		
 		printf("fabulous cover drive ball races to the fence for four runs\a");
 	score=score+4;
 	wickets=wickets+0;
 	printf("\nSCORE %d-%d",score,wickets);
 	rn=t-score;
wl=10-wickets;
 	}
 		break;
 		case'p':
 		{
 			
 			printf("out.u r bowled\a.");
 				
 	score=score+0;
 	wickets=wickets+1;
 	printf("\nSCORE %d-%d",score,wickets);
 	rn=t-score;
wl=10-wickets;
 	}
 		break;
 			case'x':
 				{
 				
 				printf("out.u r bowled\a.");
 		score=score+0;
		 wickets= wickets+1;	
 			printf("\nSCORE %d-%d",score,wickets);
 		rn=t-score;
wl=10-wickets;	
 		}
 			break;
 			case 'l':
 				{
 				
 					printf("out.u r bowled\a.");
 			score=score+0;
		 wickets= wickets+1;
		 	printf("\nSCORE %d-%d",score,wickets);
	rn=t-score;
wl=10-wickets;	 	
		}
	 break;
	 	case 'b':
 				{
 				
 					printf("tremendous bowlers back drive for four runs\a\a");
 			score=score+4;
		 wickets= wickets+0;
		 	printf("\nSCORE %d-%d",score,wickets);
		 rn=t-score;
wl=10-wickets;	
		}
	 break;
		 default:
		 printf("\nwrong choice"); 
		 break; 
   }
   	if(score>=t || wickets==10)
 		break;
       printf("\n3rd ball of over %d pitches outside the leg comming in\n press s to shuffle \n press c for cover drive \n p for pull\n x to cut \n l to leave,\nb for bowlers back drive",o);
  fflush(stdin);
scanf("%c",&i);
 switch(i)
   {
 	case 'c':
 		{
 		
 		printf("the ball wraps on the pad .there is a loud appeal but the ipact is outside the leg.notout says the umpire ");
 	score=score+0;
 	wickets=wickets+0;
 		printf("\nSCORE %d-%d",score,wickets);
 		rn=t-score;
wl=10-wickets;
}
 		break;
 		case'p':
 			{
 			
 			printf("the ball wraps on the pad .there is a loud appeal but the ipact is outside the leg.notout says the umpire");
 				
 		score=score+0;
 	wickets=wickets+0;
 		printf("\nSCORE %d-%d",score,wickets);
 	rn=t-score;
wl=10-wickets;	
 	}
 		break;
 			case'x':
 				{
 				
 				printf("the ball wraps on the pad .there is a loud appeal but the ipact is outside the leg.notout says the umpire");
 				
 		score=score+0;
 	wickets=wickets+0;
 		printf("\nSCORE %d-%d",score,wickets);
 		rn=t-score;
wl=10-wickets;
	}
 		break;
 		case 'b':
 			{
 			
 		printf("the ball wraps on the pad .there is a loud appeal but the ipact is outside the leg.notout says the umpire");
 				
 	score=score+0;
 	wickets=wickets+0;
 		printf("\nSCORE %d-%d",score,wickets);
 	rn=t-score;
wl=10-wickets;	
	}
 		break;
 			case 's':
 			{
 			
 		printf("that is a good short towards the deep midwicket region for two runs");
 				
 	score=score+2;
 	wickets=wickets+0;
 		printf("\nSCORE %d-%d",score,wickets);
 	rn=t-score;
wl=10-wickets;	
	}
 		break;
		 default:
		 printf("wrong choice"); 
		 break; 
   }
  	if(score>=t || wickets==10)
 		break; 
   printf("\n\n4th ball of over %d is full on middle stump \n press c for on drive \n p for pull\n x to cut \n l to leave",o);
  fflush(stdin);
scanf("%c",&i);
 switch(i)
   {
 	case 'c':
 		{
 		
 		printf("GOOD SHOT TO THE LONG ON FOR TWO RUNS.");
 		score=score+2;
 		wickets=wickets+0;
 		printf("\nSCORE %d-%d",score,wickets);
 	rn=t-score;
wl=10-wickets;	
 	}
 		break;
 		case'p':
 			{
 		
 			printf("THE WRAPPED ON YOUR PAD AND YOU ARE OUT LBW\a.");
 				score=score+0;
 		wickets=wickets+1;
 		printf("\nSCORE %d-%d",score,wickets);
 	rn=t-score;
wl=10-wickets;	
 	}
 			break;
 			case'x':
 				{
 				
 				printf("you missed the ball AND YOU ARE BOWLED\a.");
 					score=score+0;
 		wickets=wickets+1;
 		printf("\nSCORE %d-%d",score,wickets);
 	rn=t-score;
wl=10-wickets;	
 		
 	}
 				break;
 				case'l':
 					{
 					
 					printf("you missed the ball AND YOU ARE BOWLED\a.");
 					score=score+0;
 		wickets=wickets+1;
 		printf("\nSCORE %d-%d",score,wickets);
 	rn=t-score;
wl=10-wickets;	
}
 		break;
		 default:
		 printf("wrong choice"); 
		 break; 
   }
   	if(score>=t || wickets==10)
 		break;
    printf("\n5th ball of over %d is SHORT ON MIDDLE AND LEG \n press c for cover drive \n p for pull\n x to cut \n l to leave,\nb for bowlers back drive",o);
  fflush(stdin);
scanf("%c",&i);
 switch(i)
   {
 	case 'c':
 		{
 		
 		printf("ball wraps on the thigh pad no run");
 	score=score+0;
 	wickets=wickets+0;
 	printf("\nSCORE %d-%d",score,wickets);
 	rn=t-score;
wl=10-wickets;
 	}
 		break;
 		case'p':
 			{
 			
 			printf("ball wraps on the thigh pad no run .");
 				
 	score=score+0;
 	wickets=wickets+0;
 	printf("\nSCORE %d-%d",score,wickets);
 rn=t-score;
wl=10-wickets;	
 	}
 		break;
 			case'x':
 				{
 				
 				printf("a good cut short on the back foot to the deep point fielder for a single.");
 		score=score+1;
		 wickets= wickets+0;	
 			printf("\nSCORE %d-%d",score,wickets);
 		rn=t-score;
wl=10-wickets;	
 		}
 			break;
 			case 'l':
 				{
 				
 					printf("ball wraps on the thigh pad no run.");
 			score=score+0;
		 wickets= wickets+0;
		 	printf("\nSCORE %d-%d",score,wickets);
		 rn=t-score;
wl=10-wickets;	
		}
	 break;
	  	case 'b':
 				{
 				
 					printf("ball wraps on the thigh pad no run");
 			score=score+0;
		 wickets= wickets+0;
		 	printf("\nSCORE %d-%d",score,wickets);
		rn=t-score;
wl=10-wickets; 	
		}
	 break;
		 default:
		 printf("wrong choice"); 
		 break; 
   }
   	if(score>=t || wickets==10)
 		break;
       printf("\n\nlast ball of over %d is  full ON THE PADS \n press c for COVER DRIVE \n p for PULL\n x to CUT \n \nb for BOWLERS BACK DRIVE,\n f for FLICK",o);
  fflush(stdin);
scanf("%c",&i);
 switch(i)
   {
 	case 'c':
 		{
 		
 		printf("BALL WRAPS ON THE PAD THERE IS A LOUD APPEAL BUT NOT OUT SAYS THE UMPIRE");
 	score=score+0;
 	wickets=wickets+0;
 		printf("\nSCORE %d-%d",score,wickets);
 	rn=t-score;
wl=10-wickets;	
}
 		break;
 		case'p':
 			{
 			
 			printf("BALL WRAPS ON THE PAD THERE IS A LOUD APPEAL BUT NOT OUT SAYS THE UMPIRE");
 				
 		score=score+0;
 	wickets=wickets+0;
 		printf("\nSCORE %d-%d",score,wickets);
 	rn=t-score;
wl=10-wickets;	
 	}
 		break;
 			case'x':
 				{
 				
 				printf("BALL WRAPS ON THE PAD THERE IS A LOUD APPEAL BUT NOT OUT SAYS THE UMPIRE");
 				
 		score=score+0;
 	wickets=wickets+0;
 		printf("\nSCORE %d-%d",score,wickets);
 	rn=t-score;
wl=10-wickets;	
	}
 		break;
 		case 'b':
 			{
 			
 		printf("BALL WRAPS ON THE PAD THERE IS A LOUD APPEAL BUT NOT OUT SAYS THE UMPIRE");
 				
 	score=score+0;
 	wickets=wickets+0;
 		printf("\nSCORE %d-%d",score,wickets);
		rn=t-score;
wl=10-wickets; 
		 }	
 		break;
 		case 'f':
 			{
 			
 		printf("NICE SHORT TOWARDS DEEP THIRDMAN FOR 1 RUN ");
 				
 	score=score+1;
 	wickets=wickets+0;
 		printf("\nSCORE %d-%d",score,wickets);
		rn=t-score;
wl=10-wickets; 
		 }	
 		break;	
		 default:
		 printf("wrong choice"); 
		 break;    
}
	if(score>=t)
 		break;
printf("\nEnd of over%d\nSCORE %d-%d",o,score,wickets);
rn=w-score;
wl=10-wickets;
ol=q-o;
printf("\nyou need %d runs from %d overs with %d wickets in hand",rn,ol,wl);
}
}
   if(score<t || wickets>10)
   printf("\n\n               sorry you lose by %d runs\a\a\a\a\a\a",rn);
   else
   printf("\n\n        congrats u won by %d wickets\a \a \a \a \a \a \a \a",wl);
getch();
}
