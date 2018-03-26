#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* Refaça o algoritmo para calcular 5 equações do 2º grau, levando em consideração a análise da existência 
do X1 e X2 . */

// Paloma Rangel Rocha Info 1 - Noite - ETEC Zona Leste - LP

int main(int argc, char *argv[]) {
	
	setlocale (LC_ALL,"portuguese");
	
	int cont=1;
	float a, b, c, delta, x1, x2;
	
	for (cont=1; cont<=5; cont++) {
     
    puts ("\n\n"); 
    system ("pause");
    system ("cls");
    printf ("\t- %d", cont);
	 
    
	printf ("\nDigite valor de a:  ");
	scanf ("%f", &a);
	printf ("\nDigite valor de b:  ");
	scanf ("%f", &b);
	printf ("\nDigite valor de c:  ");
	scanf ("%f", &c);
  
    delta = pow(b,2) - (4*a*c);
   
	    if (delta>0) {
	    x1 = (-b + sqrt (delta)/2*a);
	    x2 = (-b - sqrt (delta)/2*a);
	  
	    printf ("\ndelta: %.2f", delta);
	    printf ("\n x1: %.2f", x1);
	    printf ("\n x2: %.2f", x2);	  
      }
	      else {
	      printf ("\nNão há raiz.");	
		  }
	}
	
	
	return 0;
}
