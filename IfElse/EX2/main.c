#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* O índice de massa corporal ( Peso/Alt2) avalia o nível de gordura de cada pessoa e é adotado pela 
 Organização Mundial de Saúde (OMS).
 O IMC de uma pessoa é dado pela divisão da massa em kg pela altura em metros e levado ao quadrado. 
 Elabore um algoritmo que, a partir da massa e da altura informados pelo usuário, calcule e apresente seu IMC e 
 sua classificação conforme a tabela seguinte:
< 18 Magreza 
18,0 a 24,9 Saudável 
25,0 a 29,9 Sobrepeso
 >= 30,0 Obesidade */
 // PALOMA RANGEL ROCHA 

int main(int argc, char *argv[]) {
	setlocale (LC_ALL,"portuguese"); 
	float alt, peso, imc; 
	printf ("Digite sua altura em metros: ");
	scanf ("%f", &alt);
	printf ("Digite seu peso em kg: ");
	scanf ("%f", &peso);
	imc = peso/  pow (alt,2);
	if (imc<18) {
	system ("color 8f");	
	printf ("\nO seu índice de massa corporal é: %.2f.\n\nSegundo a OMS, seu nível é de magreza.\n", imc);	
	}
	    else if  (imc>=18 && imc<25) {
	    system ("color 2f");	
	    printf ("\nO seu índice de massa corporal é: %.2f.\n\nSegundo a OMS, seu nível é saudável.\n", imc);
	    }
	    else if (imc>=25 && imc<30) {
	    system ("color 9f");	
	    printf ("\nO seu índice de massa corporal é: %.2f.\n\nSegundo a OMS, seu nível é de sobrepeso.\n", imc);
	    }
	else {
	system ("color 4f");	
	printf ("\nO seu índice de massa corporal é: %.2f.\n\nSegundo a OMS, seu nível é de obesidade.\n", imc);	
	}
	system ("PAUSE");
	return 0;
}
