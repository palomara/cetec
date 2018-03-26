#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* Receba a hora de início do turno de trabalho e exiba na tela se é turno manhã, tarde ou noite. Considere:
Manhã – 5hs às 12,59hs;
Tarde – 13hs às 20,59hs;
Noite – 21 hs às 4,59 hs;
*/
int main(int argc, char *argv[]) {
	system ("color 8f");
	setlocale (LC_ALL, "portuguese");
	int x;
	printf ("Digite a hora de inicio do seu turno: ");
	scanf ("%d", &x);
	if (x>=5 && x<13) {
	printf ("O seu turno começa às %.dh. O seu turno é o da manhã.\n\n", x);
	}
	    else if (x>=13 && x<21) {
	    printf ("O seu turno começa às %.dh. O seu turno é o da tarde.\n\n", x);	
        }
	else (x>=21 && x<5); {
	printf ("O seu turno começa as %dh. O seu turno é o da noite.\n\n", x);	
	} 
	system ("PAUSE");
	return 0;
	
}
