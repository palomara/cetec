#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*Crie um programa que receba duas dadas: Dia1/Mês1/Ano1 e Dia2/Mês2/Ano2 , efetue a comparação e apresente-as em ordem crescente.
*/

int main(int argc, char *argv[]) {
	setlocale (LC_ALL, "portuguese");
	int dia1,mes1,ano1,dia2,mes2,ano2;
	printf ("Digite o dia da primeira data: \n");
	scanf ("%d", &dia1);
	printf ("Digite o mês da primeira data: \n");
	scanf ("%d", &mes1);
	printf ("Digite o ano da primeira data:  \n");
	scanf ("%d", &ano1);
	printf ("Digite o dia da segunda data: \n");
	scanf ("%d", &dia2);
	printf ("Digite o mês da segunda data: \n");
	scanf ("%d", &mes2);
	printf ("Digite o ano da segunda data: \n");
	scanf ("%d", &ano2);
	
   if (ano1<ano2) {
    printf ("\n%d/%d/%d\t - \t%d/%d/%d\n", dia1,mes1,ano1,dia2,mes2,ano2);
   }
        else if (ano2<ano1) {
        printf ("\n%d/%d/%d\t - \t%d/%d/%d\n", dia2,mes2,ano2,dia1,mes1,ano1);
		}
		else if (ano1==ano2 && mes1<mes2) {
        printf ("\n%d/%d/%d\t - \t%d/%d/%d\n", dia1,mes1,ano1,dia2,mes2,ano2);	
		}
		else if (ano1==ano2 && mes2<mes1) {
		printf ("\n%d/%d/%d\t - \t%d/%d/%d\n", dia2,mes2,ano2,dia1,mes1,ano1);	
		}
		else if (ano1==ano2 && mes1==mes2 && dia1<dia2) {
		printf ("\n%d/%d/%d\t - \t%d/%d/%d\n", dia1,mes1,ano1,dia2,mes2,ano2);		
		}
		else if (ano1==ano2 && mes1==mes2 && dia2<dia1) {
		printf ("\n%d/%d/%d\t - \t%d/%d/%d\n", dia2,mes2,ano2,dia1,mes1,ano1);			
		}
	else {
	printf ("%d/%d/%d\t - \t%d/%d/%d\n", dia1,mes1,ano1,dia2,mes2,ano2);	
	printf ("\nDATAS IGUAIS\n");	
    }
	
	return 0;
}
