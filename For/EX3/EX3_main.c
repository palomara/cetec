#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Crie um algoritmo que calcule e apresente a área externa de uma lata, onde é fornecido pelo usuário 
somente o Raio e Altura. */

// Paloma Rangel Info1 - Noite - ETEC ZL - LP - Turma B

int main(int argc, char *argv[]) {
	
	setlocale (LC_ALL,"portuguese");
	
	int cont = 1;
	float a, r, h;
	
	for (cont=1; cont<=5;cont++) {
	
	puts ("\n\n"); 
    system ("pause");
    system ("cls");
    printf ("\t- %d", cont);
	
	printf ("\nDigite altura:  ");
	scanf ("%f", &h);
	printf ("\nDigite raio: ");
	scanf ("%f", &r);
	
	a = 2*3.14*r*h;
	
	printf ("\nÁrea: %.2f", a);	
	}
	
	
	
	
	return 0;
}
