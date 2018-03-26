#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float a, b, h;
	int cont =1;
	setlocale (LC_ALL,"portuguese");
	
	
	while (cont<=10) 
	{ 
	cont = cont + 1;
	system ("PAUSE");
	system ("CLS");
	printf ("Digite o valor da base:\n");
	scanf ("%f", &b);
	printf ("Digite o valor da altura:\n");
	scanf ("%f", &h);
	a = b*h;
	printf ("O valor da área é: %2.f\n", a);

	}
	system ("PAUSE");
	return 0;
}
