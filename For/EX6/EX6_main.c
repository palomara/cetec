#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Crie um programa que receba 3 valores A, B e C. Supondo que cada valor seja um dos lados de um triângulo, 
verifique e informe se estes lados compõem um triângulo equilátero, isósceles ou escaleno, informar se não compõem
 um triângulo. Permita que o usuário utilize este programa por 10 vezes seguidas.
*/

// Paloma Rangel Info1 - Noite - ETEC ZL - LP - Turma B

int main(int argc, char *argv[]) {
	
	setlocale (LC_ALL,"portuguese");
	
	int cont = 1;// contador
	float A, B, C;
	
	for (cont=1; cont<=10;cont++) {
	
	puts ("\n\n");
	system ("pause");
	system ("cls");
	
	puts ("************************");
	printf ("*Descubra seu Triângulo*");
	puts ("\n************************");
	printf ("\nInforme lado A:\n ");
	scanf ("%f", &A);
	printf ("\nInforme lado B:\n"); 
	scanf ("%f", &B);
	printf ("\nInforme lado C:\n");
	scanf ("%f", &C);
	
	if (C > A + B  && A > B + C  && B > A + C  || A==0 && B==0 || C==0){
    printf("\n\nNÃO FORMAM UM TRIÂNGULO\n");
    }
		else if (A==B && A== C && B==C) {
		printf ("\n************* TRIÂNGULO EQUILÁTERO *************\n");	
		}
        else if (A==B && A!=C && B!=C) {
        printf ("\n************* TRIÂNGULO ISÓSCELES *************\n");	
		}	
		else if (A==C && A!=B && C!=B) {
		printf ("\n************* TRIÂNGULO ISÓSCELES *************\n");	
		}
		else if (B==C && B!=A && C!=A) {
		printf ("\n************* TRIÂNGULO ISÓSCELES ************* \n");	
		}
	else {
	printf ("\n************* TRIÂNGULO ESCALENO *************\n");	
	}	
		
	}
	
	
	return 0;
}
