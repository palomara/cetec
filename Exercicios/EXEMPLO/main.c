#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale (LC_ALL, "portuguese");
	int op, num1, num2, result;
	printf ("\tDigite a op��o desejada:\n");
	printf ("\n1-\tSoma\n2-\tSubtra��o\n3-\tDivis�o\n4-\tMultiplica��o\n\n");
	scanf ("%d", &op);
	printf ("\nDigite primeiro n�mero:\n");
	scanf ("%d", &num1);
	printf ("Digite segundo n�mero:\n");
	scanf ("%d", &num2);
	
	switch (op) {
	case 1: result = num1 + num2;
	break;
	case 2: result = num1 - num2;
	break;
	case 3: result = num1/num2;
	break;
	case 4: result = num1 * num2;
	break;
	default:
	printf ("op��o inv�lida");	
	}

	printf ("\nO resultado �: %d", result);
		return 0;
}
