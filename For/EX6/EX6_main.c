#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Crie um programa que receba 3 valores A, B e C. Supondo que cada valor seja um dos lados de um tri�ngulo, 
verifique e informe se estes lados comp�em um tri�ngulo equil�tero, is�sceles ou escaleno, informar se n�o comp�em
 um tri�ngulo. Permita que o usu�rio utilize este programa por 10 vezes seguidas.
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
	printf ("*Descubra seu Tri�ngulo*");
	puts ("\n************************");
	printf ("\nInforme lado A:\n ");
	scanf ("%f", &A);
	printf ("\nInforme lado B:\n"); 
	scanf ("%f", &B);
	printf ("\nInforme lado C:\n");
	scanf ("%f", &C);
	
	if (C > A + B  && A > B + C  && B > A + C  || A==0 && B==0 || C==0){
    printf("\n\nN�O FORMAM UM TRI�NGULO\n");
    }
		else if (A==B && A== C && B==C) {
		printf ("\n************* TRI�NGULO EQUIL�TERO *************\n");	
		}
        else if (A==B && A!=C && B!=C) {
        printf ("\n************* TRI�NGULO IS�SCELES *************\n");	
		}	
		else if (A==C && A!=B && C!=B) {
		printf ("\n************* TRI�NGULO IS�SCELES *************\n");	
		}
		else if (B==C && B!=A && C!=A) {
		printf ("\n************* TRI�NGULO IS�SCELES ************* \n");	
		}
	else {
	printf ("\n************* TRI�NGULO ESCALENO *************\n");	
	}	
		
	}
	
	
	return 0;
}
