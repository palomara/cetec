#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
#include <string.h>
/**************************************************************************************************************************
* Paloma Rangel Rocha                                                                                                     *    
* Noite                                                                                                                   *
* Info - 1                                                                                                                * 
***************************************************************************************************************************/ 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

int voto, nulo=0, branco=0, c1=0, c2=0, c3=0, c4=0, r, cont = 1;
char confirm [5];

setlocale (LC_ALL, "portuguese");

while (cont>=0) {
cont = cont + 1;
printf ("\n\t Candidatos:\n -Digite \"1\" para o primeiro canditado. \n -Digite \"2\" para o segundo canditado.\n -Digite \"3\" para o terceiro canditado. \n -Digite \"4\" para o quarto canditado.");
printf ("\n -Digite \"0\" para nulo. \n -Digite \"5\" para branco.\n");
printf ("\n************Digite \"sim\" ou \"não\" para confirmar o voto.************\n");
printf ("\n -Para encerrar a votação digite \"7\".\n");
printf ("\nEntre com o voto:\n");
scanf ("%d", &voto);
system ("cls");

switch (voto) {
	case 0:
	printf ("Confirmar voto? ");
	scanf ("%s", &confirm);
		if (strcmp(confirm,"sim")==0) {
		nulo++;	
		printf ("\nVoto \"nulo\" realizado\n");		
		}
			else {	
			printf ("\nVoto \"nulo\" não realizado\n");	
			}
	break;
	case 1: 
	printf ("Confirmar voto? ");
	scanf ("%s", &confirm);
		if (strcmp(confirm,"sim")==0) {
		c1++;
		printf ("\nVoto ao canditado \"1\" realizado\n");	
		}
			else {	
			printf ("\nVoto ao candidato \"1\" não realizado\n");	
			}	
	break;
	case 2:
	printf ("Confirmar voto? ");
	scanf ("%s", &confirm);
		if (strcmp(confirm,"sim")==0) {
		c2++; 
		printf ("\nVoto ao canditado \"2\" realizado\n");	
		}
			else {	
			printf ("\nVoto ao candidato \"2\" não realizado\n");	
			}	
	break;
	case 3:
	printf ("Confirmar voto? ");
	scanf ("%s", &confirm);
		if (strcmp(confirm,"sim")==0) {
		c3++; 
		printf ("\nVoto ao canditado \"3\" realizado\n");
		}
			else {	
			printf ("\nVoto ao candidato \"3\" não realizado\n");	
			}	
	break;
	case 4:
	printf ("Confirmar voto? ");
	scanf ("%s", &confirm);
		if (strcmp(confirm,"sim")==0) {
		c4++; 
		printf ("\nVoto ao canditado \"4\" realizado\n");
		}
			else {	
			printf ("\nVoto ao candidato \"4\" não realizado\n");	
			}	 
	break;
	case 5:
	printf ("Confirmar voto? ");
	scanf ("%s", &confirm);	
		if (strcmp(confirm,"sim")==0) {
		branco++;
		printf ("\nVoto \"branco\" realizado\n");
		}
			else {	
			printf ("\nVoto \"branco\" realizado\n");	
			}	  
	break;
	default:
	printf ("\nVoto inválido\n");
	break;
}
if ( voto == 7) {
cont=cont-cont-1;	
system ("CLS");
printf ("\nEncerrar votação?");
scanf ("%s", &confirm);
(strcmp(confirm,"sim")==0);
printf ("\nVotação encerrada\n");	
r = c1 + c2 + c3 + c4 + branco + nulo; 
printf ("\nNúmero total de votos: %d\n", r);
printf ("\nVotos ao canditado 1: %d\n",c1);
printf ("\nVotos ao canditado 2: %d\n", c2);
printf ("\nVotos ao canditado 3: %d\n", c3);
printf ("\nVotos ao canditado 4: %d\n", c4);
printf ("\nVotos brancos: %d\n", branco);
printf ("\nVotos nulos: %d\n", nulo);		
		}
			


	if (c1> c2 && c1>c3 && c1>c4 && c1>branco || c1>nulo) {
	printf ("\n********CANDIDATO 1 VENCEDOR********\n");
	}
		else if (c2>c1 && c2>c3 && c2>c4 && c2>branco && c2>nulo) {
		printf ("\n********CANDIDATO 2 VENCEDOR********\n");		
		}
		else if (c3>c1 && c3>c2 && c3>c4 && c3>branco && c3>nulo) {
		printf ("\n********CANDIDATO 3 VENCEDOR********\n");		
		}
		else if (c4>c1 && c4>c2 && c4>c3 && c4>branco && c4>nulo) {
				printf ("\n********CANDIDATO 4 VENCEDOR********\n");		
				}
		else if (nulo>c1 && nulo>c2 && nulo>c3 && nulo>branco && nulo>c4) {
		printf ("\n********NULOS********");
		}
		else if (branco>c1 && branco>c2 && branco>c3 && branco>c4 && branco>nulo) {
		printf ("\n********BRANCOS********");	
		}
			else {
			printf ("\n********EMPATE********");
			}	 
}


return 0;
}
