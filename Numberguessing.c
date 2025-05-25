#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main () 
{
    int randomno, guess, no_guess=0;
    srand(time(NULL));
    printf("Welcome to the number guessing game!! \n");
    randomno = rand()% 100 +1 ; // Generating a random number between 0 to 100
    do 
    {
        printf("Enter your guess between 1 to 100 \n");
        scanf("%d", &guess);
        no_guess++;

        if(guess<randomno) printf("Enter a larger number \n");
        else if(guess>randomno) printf("Enter a smaller number \n");
        else printf("Congratulations, you have successfully guessed the number in %d attempts!! \n", no_guess);
    }
    while(guess!=randomno);
}