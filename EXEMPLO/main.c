#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale (LC_ALL, "portuguese");
	int op, num1, num2, result;
	printf ("\tDigite a opção desejada:\n");
	printf ("\n1-\tSoma\n2-\tSubtração\n3-\tDivisão\n4-\tMultiplicação\n\n");
	scanf ("%d", &op);
	printf ("\nDigite primeiro número:\n");
	scanf ("%d", &num1);
	printf ("Digite segundo número:\n");
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
	printf ("opção inválida");	
	}

	printf ("\nO resultado é: %d", result);
		return 0;
}
