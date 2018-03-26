#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* Escrever um programa para apresentar o nome do lanche do MacDonalds conforme o nº da opção digitada
pelo cliente (usuário): 
1. BigMac 
2. Quarteirão 
3. MacChicken 
4. Cheddar MacMelt 
5. MacMax 
O programa deverá apresentar ao usuário o menu de opções disponíveis e deverá informar caso seja digitada 
uma opção inválida. */

//  |Paloma Rangel Rocha| |Last edit: 17/10/2017  15:12pm|
int main(int argc, char *argv[]) {
	setlocale (LC_ALL,"portuguese");
	int opcao;
	printf ("Bem-vindo ao McDonalds. \n"); 
	printf ("Esse é o nosso menu:\n");
	printf ("1 -\tBigmac\n");
	printf ("2 -\tQuarteirão\n");
	printf ("3 -\tMacChicken\n");
	printf ("4 -\tCheddar MacMelt\n");
	printf ("5 -\tMacMax\n"); 
    printf ("\n\nDigite sua opção:  ");
    scanf ("%d", &opcao);
    
    if (opcao==1) {
    system ("color 6f");	
    printf ("\nOpção número: %d, o BigMac! Ótima escolha, sabia que na França eles chamam de Le BigMac?\n\n", opcao);	
    }
	    else if (opcao==2) {
	    system ("color 6f");	
        printf ("\nOpção número: %d, o Quarteirão! Ótima escolha, sabia que na França eles chamam de Royal with Cheese?", opcao);	
	    }
	    else if (opcao==3) {
	    system ("color 6f");	
        printf ("\nOpção número: %d, o MacChiken! Ótima escolha e bom apetite.", opcao);	
        }
	    else if (opcao==4) {
	    system ("color 6f");	
        printf ("\nOpção número: %d, o Cheddar MacMelt! Ótima escolha e bom apetite.", opcao);	
        }
	    else if (opcao==5) {
	    system ("color 6f");	
        printf ("\nOpção número: %d, o MacMax! Ótima escolha e bom apetite.", opcao);	
        }
    else {
    system ("color 4f");	
	printf ("\nOpção \"%d\" inválida.\n", opcao);	
    }  
    
return 0;
}

