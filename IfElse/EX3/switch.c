#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

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
 
    switch (opcao) {
    case 1: 
	printf ("\nOpção número: %d, o BigMac! Ótima escolha, sabia que na França eles chamam de Le BigMac?\n\n", opcao);
	break;
	case 2: 
	printf ("\nOpção número: %d, o Quarteirão! Ótima escolha, sabia que na França eles chamam de Royal with Cheese?", opcao);
	break;
	case 3:      
	printf ("\nOpção número: %d, o MacChiken! Ótima escolha e bom apetite.", opcao);	
	break;
	case 4: 
	printf ("\nOpção número: %d, o Cheddar MacMelt! Ótima escolha e bom apetite.", opcao);
	break;
	case 5:
	printf ("\nOpção número: %d, o MacMax! Ótima escolha e bom apetite.", opcao);	
	break;
	default:
	printf ("\nopção inválida\n");	
	}
	return 0;
}
