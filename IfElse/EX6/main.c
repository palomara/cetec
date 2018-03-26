#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* Crie um  programa que classifique os nadadores nas categorias de acordo com sua idade:
Infantil A – de 5 à 7 anos;
Infantil B – de 8 à 10 anos; 
Juvenil A – de 11 à  13 anos;
Juvenil B  - de 14 à 17 anos;
Senior – a partir de 18 anos.
*/
/* EX6 - AULA 5
 * PALOMA RANGEL ROCHA
 * 18/10/2017
 */

int main(int argc, char *argv[]) {
	int idade; 
	setlocale (LC_ALL, "portuguese");
	printf ("Informe idade: \n");
	scanf ("%d", &idade);
	
	if (idade>=5 && idade<=7) {
	printf ("\t - INFANTIL A\n");	
	}
	    else if (idade>=8 && idade<=10) {
	    printf ("\t - IFANTIL B\n");	
		}
		else if (idade>=11 && idade<=13) {
		printf ("\t - JUVENIL A\n");	
		}
		else if (idade>=14 && idade<=17) {
		printf ("\t - JUVENIL B\n");	
		}
	else {
	printf ("\t - SÊNIOR\n");	
	}	
	
	return 0;
}
