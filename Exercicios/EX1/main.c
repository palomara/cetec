#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* Crie um algoritmo que controle uma conta poupan�a que foi aberta com um dep�sito de R$500,00. 
Sendo a remunera��o de 1% ao m�s de juros. A presente o saldo ap�s tr�s meses.
*/

int main(int argc, char *argv[]) { 
 setlocale (LC_ALL,"portuguese");
 system ("color 8f");
 system ("color 0");
 float capital, i, M1, M2, M3;
 int tempo;
  printf ("Digite quantia depositada na poupan�a: \n ");
  scanf ("%f", &capital);
  printf ("\nDigite quantos meses de remunera��o:\n ");
  scanf ("%d", &tempo);
  printf ("\nDigite a taxa de juros aplicada:\n ");
  scanf ("%f", &i);
 
  switch (tempo) {
  case 1: M1 = capital * (1+i/100);
  printf ("\nO saldo na conta poupan�a no primeiro m�s ser� de R$%.2f", M1);
  break;  
  case 2: M2 = capital * (1+i/100) * (1+i/100);
  printf ("\nO saldo na conta poupan�a no segundo m�s ser� de R$%.2f", M2);	
  break;
  case 3: M3 = capital  * (1+i/100) * (1+i/100) * (1+i/100);
  printf ("\nO saldo na conta poupan�a no terceiro m�s ser� de R$%.2f", M3); 
  break;
  default: 
  printf ("\nM�s inv�lido\n");
  }
  /* juros compostos */
	return 0;
}
