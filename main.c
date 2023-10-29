// created by Dandev
// a guessing number game
// feel free to use and change

// libs i used
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


// void function
void program(const int MIN, const int MAX, int guess, int guesses, int answer) {
    srand(time(0));
    answer = (rand() % MAX) + MIN;

    // use this for checking if everything is works
    //printf("%d", answer);

    do {
        printf("Enter a number: ");
        scanf("%d", &guess);
        if (guess > answer) {
            printf("lower! \n");
        }
        else if(guess < answer) {
            printf("higher! \n");
        }
        else{
            printf("you won! \n");
        }
        guesses++;
    }while(guess != answer);
    printf("#########################");
    printf("\nanswer: %d\n", answer);
    printf("guesses: %d\n", guesses);
    printf("#########################\n");
}


// main function
int main() {

    // all the varibels
    const int MIN = 1;
    const int MAX = 1000;
    int guess;
    int guesses; 
    int answer;

    // the function to main
    program(MIN, MAX, guess, guesses, answer);

    // end 
    return 0;
}