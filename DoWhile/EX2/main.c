#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{ 
int cont = 1;
float h, b, a;

setlocale (LC_ALL, "portuguese");

system ("color f4");
do {
    printf ("\t- %d", cont);
	cont++;		
	printf ("\nInforme a altura do triângulo:\n");
	scanf ("%f", &h);
	printf ("Informe a base do triângulo:\n");
	scanf ("%f", &b);
	
	a = b*h/2;
	
	printf ("\nA área do triângulo é: %2.f", a);
	printf ("\n\n");
	system ("pause");
	system ("cls");
  }
  while (cont<=8);
  system ("pause");


	

	
	return 0;
}
