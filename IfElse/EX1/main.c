#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* Receba a hora de in�cio do turno de trabalho e exiba na tela se � turno manh�, tarde ou noite. Considere:
Manh� � 5hs �s 12,59hs;
Tarde � 13hs �s 20,59hs;
Noite � 21 hs �s 4,59 hs;
*/
int main(int argc, char *argv[]) {
	system ("color 8f");
	setlocale (LC_ALL, "portuguese");
	int x;
	printf ("Digite a hora de inicio do seu turno: ");
	scanf ("%d", &x);
	if (x>=5 && x<13) {
	printf ("O seu turno come�a �s %.dh. O seu turno � o da manh�.\n\n", x);
	}
	    else if (x>=13 && x<21) {
	    printf ("O seu turno come�a �s %.dh. O seu turno � o da tarde.\n\n", x);	
        }
	else (x>=21 && x<5); {
	printf ("O seu turno come�a as %dh. O seu turno � o da noite.\n\n", x);	
	} 
	system ("PAUSE");
	return 0;
	
}
