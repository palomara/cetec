#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* Tendo como dados de entrada a altura e o sexo de 15 pessoas, construa um algoritmo que calcule peso ideal, utilizando as seguintes formulas: 
HOMEM=(72.7*ALT)-58;
MULHER=(62.1*ALT)-44.7.
*/
// PALOMA RANGEL - TURMA B - NOITE

int main(int argc, char *argv[]) {
	setlocale (LC_ALL,"portuguese"); 
	float alt, pesoi; 
	int cont = 1;
	int sexo;
	
	
	while (cont<=15) {
	cont = cont + 1;
	system ("PAUSE");
	system ("CLS");
	printf ("Digite 1 para feminino e 2 para masculino:\n");
	scanf ("%d", &sexo);
	switch (sexo) {
	case 1:
	printf ("Digite sua altura em metros: ");
	scanf ("%f", &alt);
	pesoi = (62.1*alt) - 44.7;
	printf ("Seu peso ideal é:%2.f\n", pesoi);
	break;
	case 2: 
	printf ("Digite sua altura em metros: ");
	scanf ("%f", &alt);
	pesoi = (72.7*alt) - 58;
    printf ("Seu peso ideal é:%2.f\n", pesoi);
    break;
    default: 
    printf ("\nOpção inválida\n");
    }
        }
   

    
    system ("PAUSE");
	return 0;
}
