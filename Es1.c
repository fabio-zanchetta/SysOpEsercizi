/*
 * Zanchetta Fabio	15/03/2020
 *
 * ESERCIZIO DA FARE:
 *
 * chiedere all'utente tre input:
 * l'operazione da fare e due numeri (i due operandi)
 * eseguire l'operazione richiesta e scrivere il risultato
 * le operazioni ammesse sono: + - * /
 */

#include <stdio.h>

int main(int argc, char **argv){

	int a,b;
	char op;
	float result;
	int res;

	printf("Inserisci un operatore (+,-,*,/) e due numeri separati da spazi: ");
	res = scanf("%c%d%d",&op,&a,&b);

	if(res == 3){
		if(op == '+') result = a + b;
		else if(op == '-') result = a - b;
		else if(op == '*') result = a * b;
		else if(op == '/') result = a / (float)b;
		else{
			printf("L'operando inserito non è valido");
			return(1);
		}
	}
	else{
		printf("I valori inseriti non sono validi");
		return(1);
	}
	printf("\n Il risultato dell'operazione è:\n\t%d %c %d = %.3f",a,op,b,result);
	return(0);
}

