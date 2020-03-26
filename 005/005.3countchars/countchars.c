#include <stdio.h>


int main(int argc, char *argv[]) {

	// ESERCIZIO 1:
	// leggi da stdin fino a EOF e conta i caratteri: '\n', '\t' e ' '
	// dopo EOF, scrive su stdout il numero di occorrenze di ciascun carattere

	int c;
	unsigned long new_line_counter = 0;
	unsigned long tab_counter = 0;
	unsigned long space_counter = 0;

	c = getchar();

	while (c != EOF) {

		switch(c){
		case '\n':
			new_line_counter++;
			break;
		case '\t':
			tab_counter++;
			break;
		case ' ':
			space_counter++;
			break;
		default:
			break;
		}
		c = getchar();
	}

	printf("\nNumero di '\\n': %lu\nNumero di '\\t': %lu\nNumero di ' ' : %lu\n\n",
			new_line_counter, tab_counter, space_counter);

	return 0;
}
