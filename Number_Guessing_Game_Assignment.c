#include <stdio.h>

int main() {
	int secret=7; //The secret Number
	int guess;
	int attempts=0; //Counter for number of guesses
	
	printf("Guess a number between 1 and 20:\n");
	
	while(1){
		scanf("%d", &guess);
		attempts++;
		
		if (guess> secret){
			printf("Too high! \n");
		} else if (guess < secret){
			printf("Too low!\n");
		} else{
			printf ("Congratulations! No of Attempts:&d \n");
			break;
		}
	}
	return 0;
}