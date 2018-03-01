#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* Crie um algoritmo que controle uma conta poupança que foi aberta com um depósito de R$500,00. 
Sendo a remuneração de 1% ao mês de juros. A presente o saldo após três meses.
*/

int main(int argc, char *argv[]) { 
 setlocale (LC_ALL,"portuguese");
 system ("color 8f");
 system ("color 0");
 float capital, i, M1, M2, M3;
 int tempo;
  printf ("Digite quantia depositada na poupança: \n ");
  scanf ("%f", &capital);
  printf ("\nDigite quantos meses de remuneração:\n ");
  scanf ("%d", &tempo);
  printf ("\nDigite a taxa de juros aplicada:\n ");
  scanf ("%f", &i);
 
  switch (tempo) {
  case 1: M1 = capital * (1+i/100);
  printf ("\nO saldo na conta poupança no primeiro mês será de R$%.2f", M1);
  break;  
  case 2: M2 = capital * (1+i/100) * (1+i/100);
  printf ("\nO saldo na conta poupança no segundo mês será de R$%.2f", M2);	
  break;
  case 3: M3 = capital  * (1+i/100) * (1+i/100) * (1+i/100);
  printf ("\nO saldo na conta poupança no terceiro mês será de R$%.2f", M3); 
  break;
  default: 
  printf ("\nMês inválido\n");
  }
  /* juros compostos */
	return 0;
}
