#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Crie um  programa que classifique os nadadores nas categorias de acordo com sua idade:
Infantil A � de 5 � 7 anos;
Infantil B � de 8 � 10 anos; 
Juvenil A � de 11 �  13 anos;
Juvenil B  - de 14 � 17 anos;
Senior � a partir de 18 anos. */

// Paloma Rangel Info1 - Noite - ETEC ZL - LP - Turma B

int main(int argc, char *argv[]) {
	
	setlocale (LC_ALL,"portuguese");
	
	int idade, cont = 1; //contador
	
	for (cont=1;cont<=5;cont++) {
	
	puts ("\n\n"); 
    system ("pause");
    system ("cls");
    printf ("\t- %d", cont);
	
    printf ("\nInforme idade: \n");
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
		printf ("\t - S�NIOR\n");	
		}	
    }
	
	return 0;
}
