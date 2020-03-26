#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {

	// ESERCIZIO 2:

	// scrivere il seguente programma:

	// legge e salva tutti i dati provenienti da stdin fino a EOF

	// poi scrive su stdout i dati accumulati ma all'incontrario (dall'ultimo al primo)

	// suggerimenti: .....

	int c;
	int size = 1;

	char* char_input;

	char_input = NULL;

	c = getchar();

	while(c != EOF){

		char_input = realloc(char_input, size*sizeof(char));
		char_input[size-1] = c;

		c = getchar();
		size++;
	}

	printf("\nHo letto:\n\n");

	for(int i = size - 2; i >= 0; i--){
		printf("%c",char_input[i]);
	}

	printf("\n\n");
	return 0;
}
