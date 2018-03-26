#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Dados três números verificar se eles podem representar as medidas dos lado de um triângulo e classificar equilátero, isósceles e escoleno.

int main(int argc, char *argv[]) {
	float a, b, c;
	printf ("Informe o valor de a:  ");
	scanf ("%f", &a);
	printf ("Informe o valor de b:  ");
	scanf ("%f", &b);
	printf ("Informe o valor de c:  ");
	scanf ("%f", &c);
	
	if (a<b+c && b<a+c && c<a+b) {
		
		if (a==b && b==c) {
	    printf ("\n\nEquilatero");
			}
	    else {
	
	       if (a==b || b==c || c==a) 
		   	       printf ("\n\nIsosceles");	
         	
			 	    else 
	                printf ("\n\nEscaleno"); 
	            
	         }

	
	}
	else 
	printf ("Nao forma um triangulo");	
	printf ("\n\n");	
	    	
	system ("pause");
	
	return 0;
}
