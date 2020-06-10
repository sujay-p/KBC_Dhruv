#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <conio.h>
#include <ctype.h>



/*---------------------------------
 * Functions Declaration 
 *---------------------------------
 */

void welcome();
void menu();
void startGame();
void rules();



/*----------------------------------
 * Main method
 *----------------------------------
 */

int main() {
    welcome();
    return 0;
}

/*-----------------------------------
 * Welcome screen 
 * Enter name and choice
 *-----------------------------------
 */


void welcome() {
	char name[20];
	printf("\t\t__________________________________________\n");
	printf("\t\t__________________________________________\n");
	printf("\n\t\t\t\t   WELCOME \t\t\t");
	printf("\n\n\t\t\t\t     TO \t\t\t");
	printf("\n\n\t\t\t\tTHE QUIZ GAME\t\t\t");
	printf("\n\t\t___________________________________________\n");
	printf("\t\t___________________________________________\n");
	
	printf("\n\n\t\t\tWHO WANTS TO BE A MILLIONAIRE\n");
	printf("\t\t___________________________________________\n");
	
	printf("\n\n\n\n\n\n\n\n\n\n ENTER YOUR NAME  :  ");
	scanf("%s",&name);
	
	menu();
}
void menu() {
	system("CLS");

	printf("\n\n\t\t\t\tMENU PAGE\n");
	printf("\t\t___________________________________________\n");
		
	printf("\n\n\n\n\t\t\t1. START GAME\t\n"); 
	printf("\n\t\t\t2. RULES\t\n");
	printf("\n\t\t\t3. QUIT\t\n");
	
	printf("\n\n\n\n\n\n\n\n\n\n\n Enter your choice : ");
	short int choice; //variable to select one of the three choices above
	scanf("%hd", &choice);
	
	switch(choice) {
		case 1 :
			startGame();
			break;
			
		case 2 :
			rules();
			break;
		
		case 3 :
			system("cls");
			return;
			break;
		
		default :
			menu(); //switch case will keep on opening the menu page until the user puts a valid input
		
	}
}


/*--------------------------------
 * choice 1 = starts the game
 *--------------------------------
 */
 
void startGame() {
	int i, r, countr;
	float score;
	
	countr=0;
    for(i=1;i<=10;i++) {
    	system("cls");
    	r=i;
		switch(r)
		{
			case 1:
				printf("\n\n\n Which is the longest River in the world?");
				printf("\n\n  A.Nile\t\tB.Koshi\n\n  C.Ganga\t\tD.Amazon\n\n");
		
				if (toupper(getch())=='A')
				{
					printf("\n\n\t\tCorrect!!!");countr++;getch();
					break;
				}
				else
		       {
			   		printf("\n\n\t\tWrong!!! The correct answer is A.Nile");getch();
					goto score;
					break;
				}
			
			case 2:
				printf("\n\n\n What is the National Name of Japan?");
				printf("\n\n  A.Polska\t\tB.Hellas\n\n  C.Drukyul\t\tD.Nippon\n\n");
		
				if (toupper(getch())=='D')
				{
					printf("\n\n\t\tCorrect!!!");countr++;getch();
			 	break;
				}
				else
		       {
			   		printf("\n\n\t\tWrong!!! The correct answer is D.Nippon");getch();
		       		goto score;
		       		break;
				}

        	case 3:
				printf("\n\n\n Among the top 10 highest peaks in the world, how many lie in Nepal? ");
				printf("\n\n  A.6\t\tB.7\n\n  C.8\t\tD.9\n\n");
		
				if (toupper(getch())=='C')
				{
					printf("\n\n\t\tCorrect!!!");countr++;getch();
			 		break;}
				else
		       {
			   		printf("\n\n\t\tWrong!!! The correct answer is C.8");getch();
		       		goto score;
		       		break;}

        	case 4:
				printf("\n\n\n The Laws of Electromagnetic Induction were given by?");
				printf("\n\n  A.Faraday\t\tB.Tesla\n\n  C.Maxwell\t\tD.Coulomb\n\n");
		
				if (toupper(getch())=='A')
				{
					printf("\n\n\t\tCorrect!!!");countr++;getch();
			 		break;}
				else
		       {
                	printf("\n\n\t\tWrong!!! The correct answer is A.Faraday");getch();
		       		goto score;
		       		break;
		       }

        	case 5:
				printf("\n\n\n In what unit is electric power measured?");
				printf("\n\n  A.Coulomb\t\tB.Watt\n\n  C.Power\t\tD.Units\n\n");
		
				if (toupper(getch())=='B')
				{
					printf("\n\n\t\tCorrect!!!");countr++;getch(); break;}
				else
		       {
		           printf("\n\n\t\tWrong!!! The correct answer is B.Power");
		       		getch();
		       		goto score;
		       		break;
		       }

			case 6:
				printf("\n\n\n Which element is found in Vitamin B12?");
				printf("\n\n  A.Zinc\t\tB.Cobalt\n\n  C.Calcium\t\tD.Iron\n\n");
				
				if (toupper(getch())=='B' )
				{
					printf("\n\n\t\tCorrect!!!");countr++;getch();
					break;
				}
				else
		       {
			   		printf("\n\n\t\tWrong!!! The correct answer is B.Cobalt");goto score;
		       		getch();
		       		break;
				}

        	case 7:
				printf("\n\n\n Study of Earthquake is called............,");
				printf("\n\n  A.Seismology\t\tB.Cosmology\n\n  C.Orology\t\tD.Etimology\n\n");
		
				if (toupper(getch())=='A')
				{
					printf("\n\n\t\tCorrect!!!");countr++;getch();
			 		break;}
				else
		       {
			   		printf("\n\n\t\tWrong!!! The correct answer is A.Seismology");getch();
		      		goto score;
		       		break;
		       }

        	case 8:
				printf("\n\n\n How many times a piece of paper can be folded at the most?");
				printf("\n\n  A.6\t\tB.7\n\n  C.8\t\tD.Depends on the size of paper\n\n");
		
				if (toupper(getch())=='B')
				{
					printf("\n\n\t\tCorrect!!!");countr++;getch(); break;}
				else
		       {
			   		printf("\n\n\t\tWrong!!! The correct answer is B.7");getch();
		       		goto score;
		       		break;
				}

        	case 9:
				printf("\n\n\n What is the capital of Denmark?");
				printf("\n\n  A.Copenhagen\t\tB.Helsinki\n\n  C.Ajax\t\tD.Galatasaray\n\n");
		
				if (toupper(getch())=='A')
				{
					printf("\n\n\t\tCorrect!!!");countr++; getch();
					break;
				}
				else
		       {
			   		printf("\n\n\t\tWrong!!! The correct answer is A.Copenhagen");getch();
		       		goto score;
		       		break;
				}

        	case 10:
				printf("\n\n What is the National Game of England?");
				printf("\n\n  A.Football\t\tB.Basketball\n\n  C.Cricket\t\tD.Baseball\n\n");
				
				if (toupper(getch())=='C')
				{
					printf("\n\n\t\tCorrect!!!");countr++;getch();
			 		break;getch();
				}
				else
		       {
			   		printf("\n\n\t\tWrong!!! The correct answer is C.Cricket");getch();
		       		goto score;
		       		break;}

        	case 11:
				printf("\n\n\nWhat is the color of the Black Box in aeroplanes?");
				printf("\n\nA.White\t\tB.Black\n\nC.Orange\t\tD.Red\n\n");
		
				if (toupper(getch())=='C')
				{
					printf("\n\nCorrect!!!");countr++;getch();
					break;}
				else
            	{
				  	printf("\n\nWrong!!! The correct answer is C.Orange");getch();
              		break;goto score;
				}

        	case 12:
				printf("\n\n\nWhich city is known at 'The City of Seven Hills'?");
				printf("\n\nA.Rome\t\tB.Vactican City\n\nC.Madrid\t\tD.Berlin\n\n");
		
				if (toupper(getch())=='A')
			  	{
				  	printf("\n\nCorrect!!!");countr++;getch();
			   		break;}
				else
              	{
				  	printf("\n\nWrong!!! The correct answer is A.Rome");getch();
              		break;goto score;
				}

			case 13:
				printf("\n\n\nName the country where there no mosquitoes are found?");
				printf("\n\nA.Japan\t\tB.Italy\n\nC.Argentina\t\tD.France\n\n");
				
				if (toupper(getch())=='D')
				{	
					printf("\n\nCorrect!!!");countr++;getch();
					break;
				}
				else
		       {
			   		printf("\n\nWrong!!! The correct answer is D.France");getch();
		       		break;goto score;
				}

        	case 14:
				printf("\n\n\nWho is the author of 'Pulpasa Cafe'?");
				printf("\n\nA.Narayan Wagle\t\tB.Lal Gopal Subedi\n\nC.B.P. Koirala\t\tD.Khagendra Sangraula\n\n");
		
				if (toupper(getch())=='A')
				{
					printf("\n\nCorrect!!!");countr++;getch();
			 		break;
				}
				else
		       	{
				   	printf("\n\nWrong!!! The correct answer is A.Narayan Wagle");getch();
		       		break;goto score;
				}

			case 15:
				printf("\n\n\nWhich Blood Group is known as the Universal Recipient?");
				printf("\n\nA.A\t\tB.AB\n\nC.B\t\tD.O\n\n");
		
				if (toupper(getch())=='B')
				{
					printf("\n\nCorrect!!!");countr++;getch();
			 	break;
				}
				else
		       	{
				   printf("\n\nWrong!!! The correct answer is B.AB");getch();
		       		goto score;
		       		break;
				}

			case 16:
				printf("\n\n\nWhat is the unit of measurement of distance between Stars?");
				printf("\n\nA.Light Year\t\tB.Coulomb\n\nC.Nautical Mile\t\tD.Kilometer\n\n");
		
				if (toupper(getch())=='A')
				{
					printf("\n\nCorrect!!!");countr++; getch();
					break;
				}
				else
		       {	
			   		printf("\n\nWrong!!! The correct answer is A.Light Year");getch();
		       		goto score;
		       		break;
				}


			case 17:
				printf("\n\n\nThe country famous for Samba Dance is........");
				printf("\n\nA.Brazil\t\tB.Venezuela\n\nC.Nigeria\t\tD.Bolivia");
		
				if (toupper(getch())=='A')
				{
					printf("\n\nCorrect!!!");countr++; getch();
					break;
				}
				else
		       	{
				   printf("\n\nWrong!!! The correct answer is A.Brazil");getch();goto score;
		       		break;
				}

			case 18:
				printf("\n\n\nWind speed is measure by__________?");
				printf("\n\nA.Lysimeter\t\tB.Air vane\n\nC.Hydrometer\t\tD.Anemometer\n\n");
		
				if (toupper(getch())=='D')
				{
					printf("\n\nCorrect!!!");countr++; getch();
					break;
				}
				else
		       	{
				   printf("\n\nWrong!!! The correct answer is D.Anemometer");getch();goto score;
		       		break;
				}

			case 19:
				printf("\n\n\nWhich city in the world is popularly known as The City of Temple?");
				printf("\n\nA.Delhi\tB.Bhaktapur\n\nC.Kathmandu\tD.Agra\n\n");
				
				if (toupper(getch())=='C')
				{
					printf("\n\nCorrect!!!");countr++; getch();
					break;
				}
				else
		       	{
				   	printf("\n\nWrong!!! The correct answer is C.Kathmandu");getch();goto score;
		       		break;
				}

			case 20:
				printf("\n\n\nWhich hardware was used in the First Generation Computer?");
				printf("\n\nA.Transistor\t\tB.Valves\n\nC.I.C\t\tD.S.S.I");
		
				if (toupper(getch())=='B')
				{
					printf("\n\nCorrect!!!");countr++; getch();
					break;
				}
				else
		       	{
				   	printf("\n\nWrong!!! The correct answer is B.Valves");getch();goto score;
		       		break;
				}

			case 21:
				printf("\n\n\nOzone plate is being destroyed regularly because of____ ?");
				printf("\n\nA.L.P.G\t\tB.Nitrogen\n\nC.Methane\t\tD. C.F.C");
		
				if (toupper(getch())=='D')
				{
					printf("\n\nCorrect!!!");countr++; getch();
					break;
				}
				else
		    	{
					printf("\n\nWrong!!! The correct answer is D. C.F.C");getch();goto score;
		    		break;
				}

			case 22:
				printf("\n\n\n Who won the Women's Australian Open Tennis in 2007?");
				printf("\n\n  A.Martina Hingis\t\tB.Maria Sarapova\n\n  C.Kim Clijster\t\tD.Serena Williams");
				
				if (toupper(getch())=='D')
				{
					printf("\n\n\t\tCorrect!!!");countr++; getch();
					break;
				}
				else
		       	{
				   	printf("\n\n\t\tWrong!!! The correct answer is D.Serena Williams");getch();goto score;
		       		break;
				}

			case 23:
				printf("\n\n\n Which film was awarded the Best Motion Picture at Oscar in 2010?");
				printf("\n\n  A.The Secret in their Eyes\t\tB.Shutter Island\n\n  C.The King's Speech\t\tD.The Reader");
				
				if (toupper(getch())=='C')
				{
					printf("\n\n\t\tCorrect!!!");countr++; getch();
					break;
				}
				else
		       	{
				   	printf("\n\n\t\tWrong!!! The correct answer is C.The King's Speech");getch();goto score;
		      		break;
				}
			}
		}
	score: //variable score defined
    
	system("cls");
	score=(float)countr*100000;
	
	if(score>0.00 && score<1000000)
	{
	   printf("\n\n\t\t**************** CONGRATULATION *****************");
	     printf("\n\n\t\t\t You won $%.2f\n",score);goto go;}

	else if(score==1000000.00)
	{
	    printf("\n\n\n \t\t**************** CONGRATULATION ****************");
	    printf("\n\t\t\t\t YOU ARE A MILLIONAIRE!!!!!!!!!");
	    printf("\n\t\t You won $%f",score);
	    printf("\t\t Thank You!!");
	}
	else
	{
	 	printf("\n\n\t******** SORRY YOU DIDN'T WIN ANY CASH ********");
		printf("\n\t\t Thanks for your participation");
	    printf("\n\t\t TRY AGAIN");goto go;
	}

	go: //variable go defined
	
	puts("\n\n\n\n\n\n\n\n\n\n Press Y if you want to play again");
	puts("\n Press any key if you want to go main menu");
	if (toupper(getch())=='Y')
		startGame();
	else
	{
		// enters score
		menu();
	}
}


/*-------------------------------------------
 * choice 2 = tells the rules of the game
 *-------------------------------------------
 */
 
 
void rules() {
	
	system("cls");
	
	printf("\n\n\t\t\t\t RULES \t\t\t");
	printf("\n\t\t_______________________________________________\n\n");
	printf("\n > A question will be displayed with 4 options\n\n > Press the key (A/B/C/D) corresponding to the correct answer according to you.\n\n > For every right answer, you earn $100,000.\n\n > If your answer is wrong, the game ends.\n\n > Answer maximum number of questions correctly to achieve highest scores and\n become a millionaire.\n");
	printf("\t\t____________________________________________________\n\n\n\n\n");
	
	
	printf("Press 0 to return to the main menu\n"); //displays the menu page
	printf("Press 1 to start the game\n"); //starts the game
	printf("Press 2 to exit the game\n"); // quits the game
	
	short int i; //variable to select one of the three choices above
	scanf("%hd",&i);
	
	switch(i) {
		case 0 :
			menu();
			break;
		
		case 1 :
			startGame();
			break;
		
		case 2:
			system("cls");
			return;
			break;
			
		default :
			rules(); //switch will keep on opening the rules page unless you enter a valid option
	}
}