#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	system ("color 4f");
	setlocale (LC_ALL,"portuguese");
	int opcao;
	system ("color f4");
	printf ("Bem-vindo ao McDonalds. \n"); 
	printf ("\nEsse é o nosso menu:\n");
	printf ("\n1 -\tBigmac\n");
	printf ("2 -\tQuarteirão\n");
	printf ("3 -\tMacChicken\n");
	printf ("4 -\tCheddar MacMelt\n");
	printf ("5 -\tMacMax\n"); 
    printf ("\n\nDigite sua opção:  ");
    scanf ("%d", &opcao);
    
    switch (opcao) {
        case 1:
        system ("color 6f");	
        printf ("\nOpção número: %d, o BigMac! Ótima escolha, sabia que na França eles chamam de Le BigMac?\n\n", opcao);	
        break;

	    case 2: 
	    system ("color 6f");	
        printf ("\nOpção número: %d, o Quarteirão! Ótima escolha, sabia que na França eles chamam de Royal with Cheese?", opcao);	
	    break;
	    
	    case 3: 
	    system ("color 6f");	
        printf ("\nOpção número: %d, o MacChiken! Ótima escolha e bom apetite.", opcao);	
        
	    case 4:
	    system ("color 6f");	
        printf ("\nOpção número: %d, o Cheddar MacMelt! Ótima escolha e bom apetite.", opcao);	
        break;
        
	    case 5:
	    system ("color 6f");	
        printf ("\nOpção número: %d, o MacMax! Ótima escolha e bom apetite.", opcao);	
        break;
        
        default:
        system ("color 4f");	
	    printf ("\nOpção \"%d\" inválida.\n", opcao);
		break;
    }
      
	return 0;
}
