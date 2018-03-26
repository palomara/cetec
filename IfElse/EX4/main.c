#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/* Crie um algoritmo que receba um número entre 1 e 12 e apresente o mês correspondente: */

// |Paloma Rangel Rocha| 

int main(int argc, char *argv[]) 
{
	setlocale (LC_ALL,"portuguese");
	int mes;
	printf ("Digite o número do mês: ");
	scanf ("%d", &mes);
	
	if (mes==1) {
	printf ("\nO mês de número %d é: Janeiro\n", mes);	
	}
	    else if (mes==2) {
	    printf ("\nO mês de número %d é: Fevereiro\n", mes);	
	    }
		else if (mes==3) {
	    printf ("\nO mês de número %d é: Março\n", mes);	
	    }
		else if (mes==4) {
	    printf ("\nO mês de número %d é: Abril\n", mes);	
	    }
		else if (mes==5) {
	    printf ("\nO mês de número %d é: Maio\n", mes);	
	    }
		else if (mes==6) {
	    printf ("\nO mês de número %d é: Junho\n", mes);	
	    }
		else if (mes==7) {
	    printf ("\nO mês de número %d é: Julho\n", mes);	
	    }
		else if (mes==8) {
	    printf ("\nO mês de número %d é: Agosto\n", mes);	
	    }
		else if (mes==9) {
	    printf ("\nO mês de número %d é: Setembro\n", mes);	
	    }
		else if (mes==10) {
	    printf ("\nO mês de número %d é: Outubro\n", mes);	
	    }
		else if (mes==11) {
	    printf ("\nO mês de número %d é: Novembro\n", mes);	
	    }
		else if (mes==12) {
	    printf ("\nO mês de número %d é: Dezembro\n", mes);	
	    }
	else {
	printf ("\nMês inválido.\n");	
	}
	return 0;
}
