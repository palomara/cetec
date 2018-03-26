#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/* O �ndice de massa corporal ( Peso/Alt2) avalia o n�vel de gordura de cada pessoa e � adotado pela Organiza��o Mundial de Sa�de (OMS). O IMC de uma pessoa � dado pela divis�o da massa em kg pela altura em metros elevado ao quadrado. Elabore um algoritmo que, a partir da massa e da altura informados pelo usu�rio, calcule e apresente o IMC de v�rias pessoas e sua classifica��o conforme a tabela seguinte:
< 18 Magreza 
18,0 a 24,9 Saud�vel 
25,0 a 29,9 Sobrepeso
 >= 30,0 Obesidade
*/ /* Paloma Rangel - Turma B - Noite
*/

int main(int argc, char *argv[]) {
	setlocale (LC_ALL,"portuguese"); 
	float alt, peso, imc; 
	int cont = 1;
	
	
	while (cont<=15) {
	cont = cont + 1;
	system ("PAUSE");
	system ("CLS");	
	printf ("Digite sua altura em metros: ");
	scanf ("%f", &alt);
	printf ("Digite seu peso em kg: ");
	scanf ("%f", &peso);
	imc = peso/  pow (alt,2);
	if (imc<18) {
	system ("color 8f");	
	printf ("\nO seu �ndice de massa corporal �: %.2f.\n\nSegundo a OMS, seu n�vel � de magreza.\n", imc);	
	}
	    else if  (imc>=18 && imc<25) {
	    system ("color 2f");	
	    printf ("\nO seu �ndice de massa corporal �: %.2f.\n\nSegundo a OMS, seu n�vel � saud�vel.\n", imc);
	    }
	    else if (imc>=25 && imc<30) {
	    system ("color 9f");	
	    printf ("\nO seu �ndice de massa corporal �: %.2f.\n\nSegundo a OMS, seu n�vel � de sobrepeso.\n", imc);
	    }
	else {
	system ("color 4f");	
	printf ("\nO seu �ndice de massa corporal �: %.2f.\n\nSegundo a OMS, seu n�vel � de obesidade.\n", imc);
    }
    }
    system ("PAUSE");
	return 0;
}
