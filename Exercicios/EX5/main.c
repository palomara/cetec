#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* Crie um algoritmo que receba uma senha e verifique sua validade ou não. Senha válida “asdfg”. Se o usuário digitar errado mais de 3 vezes finalizar o programa.
*/
// PALOMA RANGEL - TURMA B - NOITE

int main(int argc, char *argv[]) {
	setlocale (LC_ALL, "portuguese");
	char senha [5];
	int cont = 1;
	
	
	while (cont<=3) {
	cont = cont + 1;
	system ("PAUSE");	
	system ("CLS");

	printf ("Digite a senha:   ");
	scanf  ("%s", &senha);
	
		if (strcmp(senha,"asdfg")==0) {
		
		system ("color 2f");
		
		printf ("\nSenha válida");
		printf ("\n\n");
			
		}
	
			else {
				
			system ("color 4f");
			
			printf ("\nSenha inválida"); 
			printf ("\n\n");
				  
			}
 }
	
	system ("pause");
	return 0;
}
