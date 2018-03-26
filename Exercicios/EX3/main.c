#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*Crie um algoritmo que receba 4 notas bimestrais, de 7 alunos diferentes, calcule e apresente a 
média anual de cada aluno. */

int main(int argc, char *argv[]) {
    setlocale (LC_ALL, "portuguese");
	float PB, SB, TB, QB, NF;
	int c = 1;
	
	while (c<=7) {
	c = c + 1;	
	system ("PAUSE");
	system ("CLS");
	printf ("Digite a primeira nota:\n");
	scanf ("%f", &PB);
	printf ("Digite a segunda nota:\n");
	scanf ("%f", &SB);
	printf ("Digite a terceira nota:\n");
	scanf ("%f", &TB);
	printf ("Digite a quarta nota:\n");
	scanf ("%f", &QB);
	NF = PB + SB + TB + QB;
	printf ("A média anual é: %2.f\n", NF);
	}
	system ("PAUSE");
	return 0;
}
