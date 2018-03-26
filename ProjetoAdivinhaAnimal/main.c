#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* INFO 1 - ETEC ZONA LESTE - NOITE - TURMA B - LP -
Paloma Rangel Rocha | Luis Augusto Lopes Silva

"Projeto Lógica de Programação" */

int main(int argc, char *argv[]) {
	
	setlocale (LC_ALL,"PORTUGUESE");
	
	
	int r1, r2, r3 ,r4, r5, r6, saida;// "r" referente à resposta
	int i;//contador
	
	printf ("\t\t\t ****************");
	printf("\n\t\t\t |Adivinha Bixo!|");
	printf ("\n\t\t\t ****************");
	
	printf("\n\nLeão \t\tCavalo \nHomem \t\tMacaco \nMorcego");
	printf ("\t\tBaleia \nAvestruz \tPinguim");
	printf("\nPato \t\tÁguia \nTartaruga \tCrocodilo \nCobra");
	printf("\n\nEscolha um animal:");
	
	printf("\n\n\t\t 1 - SIM \t 2 - Não \n\n ");
	
		for(i=1;i!=0;i++){
			
			printf("\n\n O animal é mamífero? ");
			
			scanf("%d",&r1);	
			
			printf("\nO animal é quadrúpede? ");
			scanf("%d",&r2);	
			
			printf("\nO animal é carnívoro? ");
			scanf("%d",&r3);	
			
			printf("\nO animal é herbivoro? ");
			scanf("%d",&r4);	
			
			printf("\nO animal é ave? ");
			scanf("%d",&r5);	
			
			printf("\nO animal é aquático? ");
			scanf("%d",&r6);	
			
			if(r1==1 && r2==1 && r3==1 && r4!=1 && r5!=1 && r6!=1){ //LEÃO
				printf("\n\tSeu animal é um LEÃO!");
			}
				else if(r1==1 && r2==1 && r3!=1 && r4==1 && r5!=1 && r6!=1){// CAVALO
					printf("\n\tSeu animal é um CAVALO!");
				}
				else if(r1==1 && r2!=1 && r3==1 && r4==1 && r5!=1 && r6!=1){ // HUMANO
					printf("\n\tSeu animal é um HUMANO!");
				}
				else if(r1==1 && r2!=1 && r3!=1 && r4==1 && r5!=1 && r6!=1){ // MACACO
					printf("\n\tSeu animal é um MACACO!");
				}	
				else if(r1==1 && r2!=1 && r3==1 && r4!=1 && r5!=1 && r6!=1){ // MORCEGO
					printf("\n\tSeu animal é um MORCEGO!");
				}
				else if(r1==1 && r2!=1 && r3==1 && r4!=1 && r5!=1 && r6==1){	// Baleia
					printf("\n\tSeu animal é um BALEIA!");
				}
				else if(r1!=1 && r2!=1 && r3!=1 && r4==1 && r5==1 && r6!=1){	//  Avestruz 
					printf("\n\tSeu animal é um AVESTRUZ!");
				}
				else if(r1!=1 && r2!=1 && r3==1 && r4!=1 && r5==1 && r6==1){// Pinguim
					printf("\n\tSeu animal é um PINGUIM!");
				}
				else if(r1!=1 && r2!=1 && r3==1 && r4==1 && r5==1 && r6!=1){ // Pato
					printf("\n\tSeu animal é um PATO!");
				}
				else if(r1!=1 && r2!=1 && r3==1 && r4!=1 && r5==1 && r6!=1){ // Águia
					printf("\n\tSeu animal é um ÁGUIA!");
				}
				else if(r1!=1 && r2==1 && r3!=1 && r4==1 && r5!=1 && r6==1){ // Tartaruga
					printf("\n\tSeu animal é um TARTARUGA!");
				}
				else if(r1!=1 && r2==1 && r3==1 && r4!=1 && r5!=1 && r6==1){ // Crocodilo
					printf("\n\tSeu animal é um CROCODILO!");
				}
				else if(r1!=1 && r2!=1 && r3==1 && r4!=1 && r5!=1 && r6!=1){ // cabra
					printf("\n\tSeu animal é um COBRA!");
				}
			else{
				printf("\n\tRespostas inválidas.");
			}
			
			puts("\n\n");
			system("pause");
			system("cls");
			
			printf("Deseja tentar de novo?");
			printf("\n\n\t\t 1 - SIM \t 2 - Não \n\n ");
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
			
			printf("\n\nLeão \t\tCavalo \nHomem \t\tMacaco \nMorcego");
			printf ("\t\tBaleia \nAvestruz \tPinguim");
			printf("\nPato \t\tÁguia \nTartaruga \tCrocodilo \nCobra");
			printf("\n\nEscolha um animal:");
			
			printf("\n\n\t\t 1 - SIM \t 2 - Não \n\n ");
					
			
		}
		
		system("pause");
		
	return 0;
	
}
