#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int i;
	int heads = 0;
	int tails = 0;
	char name[20];
	
	//Asking name and greeting
	printf("Who are you?\n> ");
	fflush(stdout);
	scanf("%s", name);
	printf("Hello, %s!\n", name);
	
	//Heads or Tails
	srand((unsigned int)time(NULL));

	printf("Tossing a coin...\n");
	for(i = 1; i < 4; i++){
		printf("Round %d: ",i);
		if(rand() % 2){
			printf("Heads\n");
			heads++;
		}
		else{
			printf("Tails\n");
			tails++;
		}
	}
	printf("Heads: %d, Tails: %d\n", heads, tails);
	
	//Judgment
	if(heads > tails) printf("%s won!\n", name);
	else printf("%s lost!\n", name);
	
	return 0;
}