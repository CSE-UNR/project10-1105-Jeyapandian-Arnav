//Author: Arnav Jeyapandian
//Date: 05/06/2025
//Purpose: the program for a game loosely based on the game Wordle

#include<stdio.h>
#define len 5
#define cap 12

char fileInput();

char prompt(int guess);

char prompt6();

char getGuess();
/*
 ();

 ();

*/
int main(){
	char in[len], wordOutput[cap][len];
	
	in = fileInput();
	
	for(int g = 0; g < len; g++){
		prompt(g);
		wordOutput[g * 2] = getGuess();
		switch(wordOutput[g * 2]){
			case 'n':
				return 0;
				break;
				
			case in:
				printf("		");
				
				for(int i; i < len; i++){
					printf("%c", );
				}
				
				printf("\n	You won in %d guesses!\n		Amazing!\n", g + 1);
				break;
				
			default:
				
		}
			
			for(int i = 0; i < len; i++){
				switch(){
					case 1:
						wordOutput[g * 2][i] = fileInput[i] - 32;
					case 0:
						wordOutput[g * 2 + 1][i] = ' ';
						break;
					default:
						wordOutput[g * 2 + 1][i] = '^';
				}
			
				if(in[i] == wordOutput[g * 2][i]){
					int* ptr1, * ptr2, * ptr3, * ptr4;
					wordOutput[g * 2][i] = in[i] - 32;
				
				}
		
				else if(){
					;
				}
			}
		}
		prompt6();
		wordOutput[10] = getGuess();
	}
	
	;
return 0;
}

char fileInput(){
	char file[len];
	FILE* fptr
	fptr = fopen("word.txt", "r");
	if(fptr == NULL){
		printf("Could not open word.txt, goodbye!\n");
		return 'n';
	}
	
	else{
		fscanf(fptr, "%s", file);
		fclose(fptr);
		return file;
	}
}

void prompt(int guess){
	printf("GUESS %d! Enter your guess: ", guess);
}

void prompt6(){
	printf("Final Guess! Enter your guess: ");
}

char getGuess(){
	scanf(" %s", &input);
	while(i != 5){
		printf("Your guess must be 5 letters long.\nPlease try again: ");
		scanf(" %s", &input);
	}
	return input;
}
/*
 (){
}

 (){
}*/
