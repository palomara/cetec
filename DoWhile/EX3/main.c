#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 

{
int cont = 1, ano, idade;

do {
	printf ("\t- %d", cont);
	cont++;
	printf ("\nDigite ano de nascimento:\n");
	scanf ("%d", &ano);
	
	idade = 2017 - ano;
	
		if (idade>=18) {
		system ("color 2f");	
		printf ("\n*****MAIOR DE IDADE*****\n");	
		}
			else {
			system ("color 4f");	
			printf ("\n*****MENOR DE IDADE*****\n");	
			}
	system ("pause");		
	system ("cls");		
   }
   while (cont<=15);

	return 0;
}
