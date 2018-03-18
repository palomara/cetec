#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale (LC_ALL,"portuguese");
    
	int cont = 1;
    float cm, m, dm, mm;
    
    do { 
    printf ("\t- %d", cont);
    cont++;
    printf ("\nDigite a medida em centímetros: ");
    scanf ("%f", &cm);
    
    m = cm/100;
    dm = cm/10;
    mm = cm/1000;
    
    printf ("\nCM:%.8f\n\nM:%.8f\n\nDM:%.4f\n\nMM:%.8f\n\n", cm, m, dm, mm);
    system ("pause");
	system ("cls");	
	    }
	while (cont<=10);    
	return 0;
	
}
