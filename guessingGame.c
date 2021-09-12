#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main() {

	int nbr,gssNbr;
	int max = 5;
	int guessCount = 0;
	int gssLimit = 3;
	int outOfGuesses = 0;
		
	srand(time(NULL));
	nbr = rand() % max+1;

	printf("You've only 3 times, try to guess the number\n");

	while(nbr != gssNbr && outOfGuesses == 0){
		if(guessCount < gssLimit) {
			
			printf("Guess a number between 0 and %d\n", max);
			scanf("%d", &gssNbr);
			guessCount++;
		}
		else {
			outOfGuesses = 1;
		}
	}

	if(outOfGuesses == 1) {	
		printf("out of guesses :(\n");
	}
	else {
		printf("you win :)\n");
	}

	return 0;
}
