#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/* Crie um algoritmo que receba um n�mero entre 1 e 12 e apresente o m�s correspondente: */

// |Paloma Rangel Rocha| 

int main(int argc, char *argv[]) 
{
	setlocale (LC_ALL,"portuguese");
	int mes;
	printf ("Digite o n�mero do m�s: ");
	scanf ("%d", &mes);
	
	if (mes==1) {
	printf ("\nO m�s de n�mero %d �: Janeiro\n", mes);	
	}
	    else if (mes==2) {
	    printf ("\nO m�s de n�mero %d �: Fevereiro\n", mes);	
	    }
		else if (mes==3) {
	    printf ("\nO m�s de n�mero %d �: Mar�o\n", mes);	
	    }
		else if (mes==4) {
	    printf ("\nO m�s de n�mero %d �: Abril\n", mes);	
	    }
		else if (mes==5) {
	    printf ("\nO m�s de n�mero %d �: Maio\n", mes);	
	    }
		else if (mes==6) {
	    printf ("\nO m�s de n�mero %d �: Junho\n", mes);	
	    }
		else if (mes==7) {
	    printf ("\nO m�s de n�mero %d �: Julho\n", mes);	
	    }
		else if (mes==8) {
	    printf ("\nO m�s de n�mero %d �: Agosto\n", mes);	
	    }
		else if (mes==9) {
	    printf ("\nO m�s de n�mero %d �: Setembro\n", mes);	
	    }
		else if (mes==10) {
	    printf ("\nO m�s de n�mero %d �: Outubro\n", mes);	
	    }
		else if (mes==11) {
	    printf ("\nO m�s de n�mero %d �: Novembro\n", mes);	
	    }
		else if (mes==12) {
	    printf ("\nO m�s de n�mero %d �: Dezembro\n", mes);	
	    }
	else {
	printf ("\nM�s inv�lido.\n");	
	}
	return 0;
}
