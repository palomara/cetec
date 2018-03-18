#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale (LC_ALL, "portuguese");
	int cont = 1;
	float kg, multa,q;
	
	do {
	
		printf ("\t- %d", cont);
		cont++;
		printf ("\nDigite a quantidade em quilos: ");
		scanf ("%f", &kg);

			if (kg>50) {
			q = kg - 50;	
			multa = q * 4;	
			printf ("\nO valor da multa é:R$%.2f\n\n", multa);
			system ("pause");
			system ("cls");
		   }
		   		else {
		   		printf ("\nPeso permitido.\n\n");	
				   }
                system ("pause");
		        system ("cls");				   
	}
	while(cont<=5);
	return 0;
}
