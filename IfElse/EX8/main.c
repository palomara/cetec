#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*Crie um programa que receba 3 valores A, B e C. Supondo que cada valor seja um dos lados de um tri�ngulo, 
  verifique e informe se estes lados comp�em um tri�ngulo equil�tero, is�sceles ou escaleno, informar se n�o comp�em um tri�ngulo. 
*/ /* EX8 - AULA 5 
    * PALOMA RANGEL ROCHA 
    */


int main(int argc, char *argv[]) {
	float A, B, C;
	setlocale (LC_ALL, "portuguese");
	printf ("Descubra seu Tri�ngulo\n");
	printf ("Informe lado A:\n ");
	scanf ("%f", &A);
	printf ("Informe lado B: \n"); 
	scanf ("%f", &B);
	printf ("Informe lado C: \n");
	scanf ("%f", &C);
	
	if (A==B && A== C && B==C) {
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
	return 0;
}
