#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* Escrever um programa para apresentar o nome do lanche do MacDonalds conforme o n� da op��o digitada
pelo cliente (usu�rio): 
1. BigMac 
2. Quarteir�o 
3. MacChicken 
4. Cheddar MacMelt 
5. MacMax 
O programa dever� apresentar ao usu�rio o menu de op��es dispon�veis e dever� informar caso seja digitada 
uma op��o inv�lida. */

//  |Paloma Rangel Rocha| |Last edit: 17/10/2017  15:12pm|
int main(int argc, char *argv[]) {
	setlocale (LC_ALL,"portuguese");
	int opcao;
	printf ("Bem-vindo ao McDonalds. \n"); 
	printf ("Esse � o nosso menu:\n");
	printf ("1 -\tBigmac\n");
	printf ("2 -\tQuarteir�o\n");
	printf ("3 -\tMacChicken\n");
	printf ("4 -\tCheddar MacMelt\n");
	printf ("5 -\tMacMax\n"); 
    printf ("\n\nDigite sua op��o:  ");
    scanf ("%d", &opcao);
    
    if (opcao==1) {
    system ("color 6f");	
    printf ("\nOp��o n�mero: %d, o BigMac! �tima escolha, sabia que na Fran�a eles chamam de Le BigMac?\n\n", opcao);	
    }
	    else if (opcao==2) {
	    system ("color 6f");	
        printf ("\nOp��o n�mero: %d, o Quarteir�o! �tima escolha, sabia que na Fran�a eles chamam de Royal with Cheese?", opcao);	
	    }
	    else if (opcao==3) {
	    system ("color 6f");	
        printf ("\nOp��o n�mero: %d, o MacChiken! �tima escolha e bom apetite.", opcao);	
        }
	    else if (opcao==4) {
	    system ("color 6f");	
        printf ("\nOp��o n�mero: %d, o Cheddar MacMelt! �tima escolha e bom apetite.", opcao);	
        }
	    else if (opcao==5) {
	    system ("color 6f");	
        printf ("\nOp��o n�mero: %d, o MacMax! �tima escolha e bom apetite.", opcao);	
        }
    else {
    system ("color 4f");	
	printf ("\nOp��o \"%d\" inv�lida.\n", opcao);	
    }  
    
return 0;
}

