#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/* Faça um algoritmo para calcular o volume de 10 esferas de raio R, em que R é um valor fornecido pelo usuário. */

// Paloma Rangel Info1 - Noite - ETEC ZL - LP - Turma B

int main(int argc, char *argv[]) {
	
	setlocale (LC_ALL,"portuguese");
	
	int cont = 1;
	float r, v;
	
	for (cont=1; cont<=10; cont++) {
		
	puts ("\n\n"); 
    system ("pause");
    system ("cls");
    printf ("\t- %d", cont);	
		
	printf ("\nDigite o raio da esfera:  ");
	scanf ("%f", &r);
	
	v = 4*3.14*pow(r,3)/3;	
	
	printf ("\nVolume = %.2f", v);
		
	}
	
	return 0;
}
