#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* INFO 1 - ETEC ZONA LESTE - NOITE - TURMA B - LP -
Paloma Rangel Rocha | Luis Augusto Lopes Silva

"Projeto L�gica de Programa��o" */

int main(int argc, char *argv[]) {
	
	setlocale (LC_ALL,"PORTUGUESE");
	
	
	int r1, r2, r3 ,r4, r5, r6, saida;// "r" referente � resposta
	int i;//contador
	
	printf ("\t\t\t ****************");
	printf("\n\t\t\t |Adivinha Bixo!|");
	printf ("\n\t\t\t ****************");
	
	printf("\n\nLe�o \t\tCavalo \nHomem \t\tMacaco \nMorcego");
	printf ("\t\tBaleia \nAvestruz \tPinguim");
	printf("\nPato \t\t�guia \nTartaruga \tCrocodilo \nCobra");
	printf("\n\nEscolha um animal:");
	
	printf("\n\n\t\t 1 - SIM \t 2 - N�o \n\n ");
	
		for(i=1;i!=0;i++){
			
			printf("\n\n O animal � mam�fero? ");
			
			scanf("%d",&r1);	
			
			printf("\nO animal � quadr�pede? ");
			scanf("%d",&r2);	
			
			printf("\nO animal � carn�voro? ");
			scanf("%d",&r3);	
			
			printf("\nO animal � herbivoro? ");
			scanf("%d",&r4);	
			
			printf("\nO animal � ave? ");
			scanf("%d",&r5);	
			
			printf("\nO animal � aqu�tico? ");
			scanf("%d",&r6);	
			
			if(r1==1 && r2==1 && r3==1 && r4!=1 && r5!=1 && r6!=1){ //LE�O
				printf("\n\tSeu animal � um LE�O!");
			}
				else if(r1==1 && r2==1 && r3!=1 && r4==1 && r5!=1 && r6!=1){// CAVALO
					printf("\n\tSeu animal � um CAVALO!");
				}
				else if(r1==1 && r2!=1 && r3==1 && r4==1 && r5!=1 && r6!=1){ // HUMANO
					printf("\n\tSeu animal � um HUMANO!");
				}
				else if(r1==1 && r2!=1 && r3!=1 && r4==1 && r5!=1 && r6!=1){ // MACACO
					printf("\n\tSeu animal � um MACACO!");
				}	
				else if(r1==1 && r2!=1 && r3==1 && r4!=1 && r5!=1 && r6!=1){ // MORCEGO
					printf("\n\tSeu animal � um MORCEGO!");
				}
				else if(r1==1 && r2!=1 && r3==1 && r4!=1 && r5!=1 && r6==1){	// Baleia
					printf("\n\tSeu animal � um BALEIA!");
				}
				else if(r1!=1 && r2!=1 && r3!=1 && r4==1 && r5==1 && r6!=1){	//  Avestruz 
					printf("\n\tSeu animal � um AVESTRUZ!");
				}
				else if(r1!=1 && r2!=1 && r3==1 && r4!=1 && r5==1 && r6==1){// Pinguim
					printf("\n\tSeu animal � um PINGUIM!");
				}
				else if(r1!=1 && r2!=1 && r3==1 && r4==1 && r5==1 && r6!=1){ // Pato
					printf("\n\tSeu animal � um PATO!");
				}
				else if(r1!=1 && r2!=1 && r3==1 && r4!=1 && r5==1 && r6!=1){ // �guia
					printf("\n\tSeu animal � um �GUIA!");
				}
				else if(r1!=1 && r2==1 && r3!=1 && r4==1 && r5!=1 && r6==1){ // Tartaruga
					printf("\n\tSeu animal � um TARTARUGA!");
				}
				else if(r1!=1 && r2==1 && r3==1 && r4!=1 && r5!=1 && r6==1){ // Crocodilo
					printf("\n\tSeu animal � um CROCODILO!");
				}
				else if(r1!=1 && r2!=1 && r3==1 && r4!=1 && r5!=1 && r6!=1){ // cabra
					printf("\n\tSeu animal � um COBRA!");
				}
			else{
				printf("\n\tRespostas inv�lidas.");
			}
			
			puts("\n\n");
			system("pause");
			system("cls");
			
			printf("Deseja tentar de novo?");
			printf("\n\n\t\t 1 - SIM \t 2 - N�o \n\n ");
			scanf("%d",&saida);
				if(saida==2){
					break;
				}
			puts ("\n\n");	
			system("pause");
			system("cls");
			
			printf ("\t\t\t ****************");
			printf("\n\t\t\t |Adivinha Bixo!|");
			printf ("\n\t\t\t ****************");
			
			printf("\n\nLe�o \t\tCavalo \nHomem \t\tMacaco \nMorcego");
			printf ("\t\tBaleia \nAvestruz \tPinguim");
			printf("\nPato \t\t�guia \nTartaruga \tCrocodilo \nCobra");
			printf("\n\nEscolha um animal:");
			
			printf("\n\n\t\t 1 - SIM \t 2 - N�o \n\n ");
					
			
		}
		
		system("pause");
		
	return 0;
	
}
