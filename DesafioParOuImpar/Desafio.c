#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// Elaborar um programa que leia um número inteiro e informe se o mesmo é par ou ímpar.

int main(int argc, char *argv[]) {
	setlocale (LC_ALL, "portuguese");
	int num, result;
	
	printf ("Informe o número:  ");
	scanf ("%d", &num);
	
    result = num%2;
	
	if (result!=0) {
		
	system ("color 3f");
	printf ("O número %d é ímpar", num);	
	printf ("\n\n");
		
	}
	
	else {
	system ("color 2f");	
	printf ("O número %d é par", num);
	printf ("\n\n");
		
	}
	
	system ("pause");

	return 0;
}
