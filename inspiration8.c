#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <string.h>

//this function will count that in total how many questions are there in the file.
int count_index(char* filename)
{
    int count = 0;
    char* str = malloc(1000*sizeof(char));
    FILE *fptr;

    if ((fptr = fopen(filename,"r")) == NULL){
        printf("Error! opening file");
        // Program exits if the file pointer returns NULL.
        exit(1);
    }

    //as per the requirements, the document  has one questions per line with its answer
    //this loop will count the line in the file.
    while (fgets(str, 1000, fptr) != NULL)
    {
        count++;
    }
    fclose(fptr);
    return count; //return the total count of line in the file
}

//this function will read the file and store the content of file in the dynamic array of characters
char** read_questions_file(char* filename, int count)
{
    char** str = malloc(count*sizeof(char*)); //this is the main array
    char* dummy_str = malloc(1000*sizeof(char)); //this array will take one line input from file and store it ini the main array
    for (int i = 0; i < count; i++) //initialize memory to the main array
    {
        str[i] = malloc(1000*sizeof(char));
    }

    FILE *fptr;
    //open the quiz file 
    if ((fptr = fopen(filename,"r")) == NULL){
        printf("Error! opening file");
        // Program exits if the file pointer returns NULL.
        exit(1);
    }
    int i = 0;
    while (fgets(dummy_str, 1000, fptr) != NULL) //read the file line by line and store it inin the main array
    {
        strcpy(str[i],dummy_str);
        i++;
        // printf("%s", dummy_str);
    }

    fclose(fptr);
    return str;
}

//this is a helper function written for removing the first space from the char array
void removeFirstSpace(char* str)
{
    char* newStr = malloc(strlen(str)*sizeof(char));
    int i;
    int j = 0;
    for ( i = 1; i <= strlen(str); i++)
    {
        str[j] = str[i];
        j++;
    }
    str[j] = str[i];
}

//as per the requirement this function will maintain the consistency it will convert the string to upper case
void to_uppercase(char* str)
{
    int i;
    for(i=0; str[i]!='\0'; i++)
    {
        /*
         * If current character is lowercase alphabet then
         * convert it to uppercase.
         */
        if(str[i]>='a' && str[i]<='z')
        {
            str[i] = str[i] - 32;
        }
    }
}

////////////the following 6 function will show the clue to the users/////////////

//as per the requirement on this level of difficulty 
//Two random letters from the answer are shown in their correct position.
//this function takes the answer as parameter and print the values of two random letters.
void clue_for_difficulty_4(char* ans)
{
    int lower = 0, upper = strlen(ans);

    //generating two random numbers for this difficulty level
    int num1 = (rand() % (upper - lower + 1)) + lower;
    int num2 = (rand() % (upper - lower + 1)) + lower;
    while (num2 == num1)
    {
        num2 = (rand() % (upper - lower + 1)) + lower;
    }
    
    for (int i = 0; i < strlen(ans); i++)
    {
        if (i == num1 || i == num2)
        {
            printf("%c ",ans[i]);
        }
        else
        {
            printf("- ");
        }
    }
    printf("\n");
    
}


//as per the requirement on this level of difficulty 
//No clue is given and only a ‘?’ is shown.
//this function takes the answer as parameter and print a '?' on screen as a clue.
void clue_for_difficulty_1(char* ans)
{
    printf("?\n"); //only a single '?' will be printed on screen
}

//as per the requirement on this level of difficulty 
//The first and the last letters are shown
//this function takes the answer as parameter and print the first and last letter of answer as a clue.
void clue_for_difficulty_3(char* ans)
{
    for (int i = 0; i < strlen(ans); i++)
    {
        if (i == 0 || i == strlen(ans)-1)//only first and last letter will be printed
        {
            printf("%c ",ans[i]);
        }
        else
        {
            printf("- ");
        }
    }
    printf("\n");
}

//as per the requirement on this level of difficulty 
//A set of blank dashes seprated by spaces is displayed, one for every letter in the answer.
//this function takes the answer as parameter and print the dashes equal to the number of letters in answer as a clue.
void clue_for_difficulty_2(char* ans)
{
    for (int i = 0; i < strlen(ans); i++)
    {
        printf("- "); //only dashes will be printed
    }
    printf("\n");
}

//as per the requirement on this level of difficulty 
//all letters are shown but in random order
//this function takes the answer as parameter and print the letters in the answers randomly as a clue.
void clue_for_difficulty_5(char* ans)
{
    int *check = malloc((strlen(ans)-1)*sizeof(int)); //this is a check array of integer which has indecies equal to the answer array
    for (int i = 0; i < strlen(ans); i++) //initialize the check array with 0's
    {
        check[i] = 0;
    }
    
    char* dummyarray = malloc(strlen(ans)*sizeof(char)); //this is the dummy array which store the content of answer array randomly
    int lower = 0, upper = strlen(ans)-1;
    int num;
    int j = 0;
    int i = 0;
    while ( i < strlen(ans)-1) //this loop will store the content of answer array randomly in the dummy array
    {
        num = (rand() % (upper - lower + 1)) + lower;
        // printf("random number: %d\n",num);
        if (check[num] == 0 && num != upper)
        {
            check[num] = 1;
            dummyarray[j] = ans[num];
            j++; 
            i++;
        }
    }

    dummyarray[strlen(ans)] = '\0';
    //this loop will print the dummy array which has the content of answer array in random manner
    for (int i = 0; i < strlen(ans); i++)
    {
        printf ("%c ",dummyarray[i]);
    }
    printf("\n");
    free(check);
    free(dummyarray);
}

//as per the requirement on this level of difficulty 
//The type of clue is randomly selected from the 5 types listed above.
//this function takes the answer as parameter and choose any of the 5 as a clue.
void clue_for_difficulty_6(char* ans)
{
    int lower = 1, upper = 5;

    //generating two random numbers for this difficulty level
    int difficulty = (rand() % (upper - lower + 1)) + lower;

        if (difficulty == 1)
    {
        clue_for_difficulty_1(ans);
    }
    else if (difficulty == 2)
    {
        clue_for_difficulty_2(ans);
    }
    else if (difficulty == 3)
    {
        clue_for_difficulty_3(ans);
    }
    else if(difficulty == 4)
    {
        clue_for_difficulty_4(ans);
    }
    else if(difficulty == 5)
    {
        clue_for_difficulty_5(ans);
    }
}

//this function will check that according to the difficulty level which clue should be printed on screen
void print_clues(char* ans, int difficulty)
{
    if (difficulty == 1)
    {
        clue_for_difficulty_1(ans);
    }
    else if (difficulty == 2)
    {
        clue_for_difficulty_2(ans);
    }
    else if (difficulty == 3)
    {
        clue_for_difficulty_3(ans);
    }
    else if(difficulty == 4)
    {
        clue_for_difficulty_4(ans);
    }
    else if(difficulty == 5)
    {
        clue_for_difficulty_5(ans);
    }
    else
    {
        clue_for_difficulty_6(ans);
    }
    
    
}

//this functionn will write the quiz history to the quiz_history.txt file
void write_in_file(char* quiz_file,int correct,int asked,int diff)
{
    FILE *fptr;

    if ((fptr = fopen("quiz_history.txt","a")) == NULL){
        printf("Error! opening file");
        // Program exits if the file pointer returns NULL.
        exit(1);
    }
    int i = 0;
    fprintf(fptr,"%s\n",quiz_file); //name of quiz file
    fprintf(fptr,"%d\n",correct); //correct ans
    fprintf(fptr,"%d\n",asked-1); //total question asked
    fprintf(fptr,"%d\n",diff); //difficulty level

    fclose(fptr);
}

//this function print the answers of wrong questions
void print_right_ans(char* filename,int* arr,int total_questions)
{
    char** questions = read_questions_file(filename, total_questions);
    for (int i = 0; i < total_questions; i++)
    {
        if (arr[i] == 1)
        {
            
            char* q = strtok(questions[i],"?");
            char* ans = strtok(NULL,"?");
            printf("%s\n",q);
            printf("Answer: %s\n",ans);
        }
        
    }
}

int main(int argc, char *argv[])
{
    int difficulty_level = 0;
    difficulty_level = atoi(argv[2]);

    if (difficulty_level < 10)
    {
        char* filename = argv[1];
        int total_questions = count_index(filename); //count the total questions in the quiz file
        
        //this is the check array which is equal to the questions array in size 
        //when a user give a wrong answer to a question the program place a 1 at that index of this array 
        int* arr = malloc(total_questions*sizeof(int));
        for (int i = 0; i < total_questions; i++)  //initialize the array with 0's
        {
            arr[i] = 0;
        }
        
        int temp_questions = 0;

        char** questions = read_questions_file(filename, total_questions); //read the question from quiz file

        int i=0;
        int correct = 0;
        int asked = 1;
        char* ans_by_user = malloc(1000*sizeof(char));
        while (temp_questions < total_questions)
        {
            system("clear");
            printf("**********************************Welcome to Quiz Engine***********************************\n");
            printf("There are total %d questions in the quiz\n",total_questions);
            char* q = strtok(questions[i],"?"); //break the question and store the question and answer separately
            char* ans = strtok(NULL,"?");
            printf("Question: %s?\t\t\t\t%d/%d\n",q,correct,asked);

            removeFirstSpace(ans);
            to_uppercase(ans); //change the answer to upper case to maintain the consistency
            print_clues(ans,difficulty_level);

            printf("Answer: ");
            memset ( ans_by_user, '\0', 1000 );

            // We wait for user input
            fgets(ans_by_user, 1000, stdin);
            to_uppercase(ans_by_user);
            if(strcmp(ans_by_user,ans) == 0) //if both the strings are equal than the entered answer is correct
            {
                correct++;
                printf("Right Answer!!!\n");
                printf("Press any key for next question!\n\n");
                getchar();
            }
            else
            {
                //otherwise the answer is wrong, we will place a 1 at that index of check array to memorize the question no.
                arr[i] = 1;
                printf("Wrong Answer!!!\n");
                // printf("The right answer is: %s\n",ans);
                printf("Press any key for next question!\n");
                getchar();
            }
            
            system("clear");
            asked++;
            temp_questions++;
            i++;
        }

        printf("Quiz Completed...\n");
        printf("Your Score is: %d/%d\n", correct,asked-1);
        printf("Do you want to know the right answers? (y/n): ");
        char* a = malloc(sizeof(char));
        memset ( a, '\0', 2 );

        // We wait for user input
        fgets(a, 2, stdin);
        int flag = 0;//this flag will check for the invalid input 0 means incorrect 1 means correct
        while (flag == 0)
        {
            if(strcmp(a,"y") == 0) //if user say 'y' then show him/her the right answers
            {
                flag = 1;
                print_right_ans(filename,arr,total_questions);
            }
            else if(strcmp(a,"n") == 0)
            {
                flag = 1;
            }
            else
            {
                printf("Invalid Choice!\nKindly enter y:yes or n:no (y/n)? ");
                memset ( a, '\0', 2 );

                // We wait for user input
                fgets(a, 2, stdin);
            }
        }
        //save the history and enc the programe
        write_in_file(filename,correct,asked,difficulty_level);
        printf("Goodbye!\n");
        free(arr);
        free(questions);
        
    }
    else
    {
        printf("Difficulty level should be less than 10...\n");
        printf("Please enter the difficulty level again...\n");
    }
    
    return 0;
}