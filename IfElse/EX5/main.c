#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* Crie um algoritmo que receba 4 notas do aluno e verifique se o mesmo foi aprovado ou reprovado com um dos seguintes conceitos:
      Aprovado		                      	                Reprovado
A - maior igual à 9                                   D – maior igual à 2,5 e menor que 5  
B – maior igual à 7 e menor que 9                     E – menor que 2,5 
C – maior igual à 5 e menor que 7         
*/
/* EX5 - AULA5
 * PALOMA RANGEL ROCHA
 * 18/10/2017
 */

int main(int argc, char *argv[]) {
	setlocale (LC_ALL,"portuguese");
	float PB, SB, TB, QB, NF;
	printf ("Digite a primeira nota: \n");
	scanf ("%f", &PB);
	printf ("Digite a segunda nota: \n");
	scanf ("%f", &SB);
	printf ("Digite a terceira nota: \n");
	scanf ("%f", &TB);
	printf ("Digite a quarta nota: \n");
	scanf ("%f", &QB);
	NF = (PB + SB + TB + QB)/4;
	
	if (NF>=9) {
	system ("color 2f");
	printf ("\n*************APROVADO*************");	
	}
	    else if (NF>=7 && NF<9){
	    system ("color 2f");	
		printf ("\n*************APROVADO*************"); 
		}
		else if (NF>=5 && NF<7) {
		system ("color 2f");	
		printf ("\n*************APROVADO*************");
		}
    else  { 
    system ("color 4f");
    printf ("\n*************REPROVADO*************");	
	    }	
   			
	return 0;
}
