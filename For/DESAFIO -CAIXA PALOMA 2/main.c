#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* DESAFIO ******************************************************************************************************************************************
 *Elaborar um programa um que simule o funcionamento de um caixa eletr�nico onde o usu�rio ter� as seguintes op��es:                                *
 *- consulta de saldo;																															    *
 *- saque;																																		    *
 *-dep�sito;																																	    *
 *-empr�stimo pessoal com 5% juros;																													*	
 *- pagamento de contas;																														    *
 *O saldo inical da conta � de R$10.000,00																											*	
 *� obrigat�rio o uso de senha alfanum�rica com 4 d�gitos para qualquer opera��o;										                            *
 *Poder� ser feita quantas op�es desejar;										 										 	 						*
 *Ao final dever� ser exibido o saldo da conta;																										*
 ****************************************************************************************************************************************************/

// PALOMA RANGEL INFO 1 - NOITE ETEC ZONA LESTE

int main(int argc, char *argv[]) {
	
	setlocale (LC_ALL,"portuguese");
	
	int opcao, cont = 1, x=1; // cont = contador, x = contador para teste de autentifica�o de senha
	float  saldo = 10000, juro, vpagto, div, vsaque, deposito, emprestimo; //saldoinicial 10000; 
	char senha [5], conta[5], confirm[5], contap[30]; // contap= n�mero da conta a pagar
	char str[10];
		

	while (x<=3) {
			
		system ("color 0f");	
		printf ("\nconta:  ");
		scanf ("%s", &conta); //numera��o ou nome de sua escolha
		printf ("\nsenha:  ");
		scanf ("%s", &senha); // Senha de acesso: df89
			
			if (strcmp(senha,"df89")==0) {
			system ("cls");	
			
			while (cont!=0) {
			printf("******************************\n");
			puts ("|\tCAIXA ELETR�NICO     |");
			printf("******************************\n");
			
			puts ("\n");
			printf("******************************\n");
			printf ("\nSAQUE\t\t\t1\nPAGAMENTO\t\t2\nDEP�SITO\t\t3\nEMPR�STIMO\t\t4\nSALDO\t\t\t5\nSAIR\t\t\t0\n\n");	
		    printf("******************************\n");	
			scanf ("%d", &opcao);
			
			switch (opcao) { 
				case 0:
					printf ("\n*Digite \"sim\" para confirmar e \"n�o\" para n�o confirmar.*");
					printf ("\n\nDeseja sair? \n");
					scanf("%s", str);
					if(strcmp(str, "sim") == 0) {
	        
		            return 1; //encerra programa
	    			}
	    			else {
	    			system ("cls");	
	                // Continua a execu�ao do programa 
	                } 
					break;	
				case 1:
				printf ("\n*Digite \"sim\" para confirmar e \"n�o\" para n�o confirmar.*");	
				printf ("\n\nVoc� escolheu \"SAQUE\". Gostaria de confirmar?\n\n:");
				scanf ("%s", &confirm);
					if (strcmp(confirm,"sim")==0) {
					system ("cls");	
					printf ("Voc� est� em \"SAQUE\".");
					printf ("\n\nDigite o valor a retirar:  ");
					scanf ("%f", &vsaque);
				    
				        printf ("\n*Digite \"sim\" para confirmar e \"n�o\" para n�o confirmar.*");
						printf ("\n\nConfirmar saque?\n\n:");
					    scanf ("%s", confirm);
					
						if (strcmp(confirm,"sim")==0) {
							
						system ("cls");
						
						saldo=saldo-vsaque;
		
						puts ("\tSAQUE REALIZADO");
						
						printf ("\nVoc� retirou R$%.2f da conta.", vsaque);	
						printf ("\n\nSeu saldo agora � de: R$%.2f", saldo);
						printf ("\n\n");
						system ("pause");
						system ("cls");		
					    }
						    else {
							    printf ("\n\nSaque n�o realizado.\n\n");	
							    printf ("Redirecionando ao menu...");
							    puts ("\n\n");
							    system ("pause");
							    system ("cls");	
								}
				 	 }
					else {
					printf ("\n\n");	
				    system ("pause");
				    system ("cls");	
					}
						
				break;
				case 2:
			    printf ("\n*Digite \"sim\" para confirmar e \"n�o\" para n�o confirmar.*");
				printf ("\n\nVoc� escolheu \"PAGAMENTO\". Gostaria de confirmar?\n\n:");
				scanf ("%s", &confirm);
					
					if (strcmp(confirm,"sim")==0) {
					system ("cls");	
					printf ("Voc� est� em \"PAGAMENTO\".");
					printf ("\n\nDigite n�mero de conta:  ");
					scanf ("%s", &contap);
					printf ("\nDigite valor do pagamento: ");
					scanf ("%f", &vpagto);
					
					printf ("\n*Digite \"sim\" para confirmar e \"n�o\" para n�o confirmar.*");
					printf ("\n\nConfirmar pagamento?\n:");
				    scanf ("%s", confirm);
					
						if (strcmp(confirm,"sim")==0) {
						
						system ("cls");
						
						saldo=saldo-vpagto;
						
						puts ("\tPAGAMENTO REALIZADO");
						
						printf ("\n\nVoc� fez um pagamento de: R$%.2f", vpagto);
						printf ("\n\nSeu saldo agora � de: R$%.2f", saldo);
						printf ("\n\n");
						system ("pause");
						system ("cls");	
				        }
						   else {
						   printf ("\n\nPagamento n�o realizado.\n\n");	
						   system ("pause");
						   printf ("Redirecionando ao menu");
						   system ("cls");	
							}
			        
				}
					else {
				    printf ("\n\n");
				    system ("pause");
				    system ("cls");
					}
				    	
				break;
				case 3:
				printf ("\n*Digite \"sim\" para confirmar e \"n�o\" para n�o confirmar.*");
				printf ("\n\nVoc� escolheu \"DEP�SITO\". Gostaria de confirmar?\n\n:");
				scanf ("%s", confirm);
					if (strcmp(confirm,"sim")==0) {
					system ("cls");	
					printf ("Voc� est� em \"DEP�SITO\".");	
					printf ("\n\nDigite valor do dep�sito:  ");
					scanf ("%f", &deposito);
				    
					printf ("\n*Digite \"sim\" para confirmar e \"n�o\" para n�o confirmar.*");
					printf ("\n\nConfirmar dep�sito?\n\n:");
				    scanf ("%s", confirm);
					    
						 if (strcmp(confirm,"sim")==0) {
						
						system ("cls");
						
						saldo= saldo+deposito;
						
						puts ("\tDEP�SITO REALIZADO");
						printf ("\n\nVoc� depositou: R$%.2f", deposito);
						printf ("\n\nSeu saldo agora � de: R$%.2f", saldo);
						printf ("\n\n");
						system ("pause");
						system ("cls");			
					    }
				   
				    else {
				    printf ("\n\nDep�sito n�o realizado.\n\n");	
				    system ("pause");
				    printf ("Redirecionando ao menu");
				    system ("cls");
					}
				}
				else {
				printf ("\n\n");
			    system ("pause");
	            system ("cls");			
				}
				break;
				case 4: 
				printf ("\n*Digite \"sim\" para confirmar e \"n�o\" para n�o confirmar.*");
				printf ("\n\nVoc� escolheu \"EMPR�STIMO\". Gostaria de confirmar?\n\n:");
				scanf ("%s", confirm);
					if (strcmp(confirm,"sim")==0) {
					system ("cls");	
					printf ("\n\nVoc� est� em \"EMPR�STIMO\".");
					printf ("\n\nDigite valor do empr�stimo:  ");
					scanf ("%f", &emprestimo);
				    
				    
				    printf ("\n*Digite \"sim\" para confirmar e \"n�o\" para n�o confirmar.*");
				    printf ("\n\nConfirmar empr�stimo?\n\n:");
				    scanf ("%s", confirm);
					    
						if (strcmp(confirm,"sim")==0) {
				    
						juro = emprestimo * 0.05;
						saldo = saldo + emprestimo;
						div = emprestimo + juro;
					
						printf ("\n\nO valor de juros no empr�stimo de R$%.2f com percentual de 5 �: R$%.2f", emprestimo, juro);
						printf ("\n\nSeu saldo agora � de: R$%.2f", saldo);
						printf("\n\nD�vida de: R$%.2f", div);
						printf ("\n\n");
						system ("pause");
						system ("cls");	
				        }
						    else {
						    printf ("\n\nEmpr�stimo n�o realizado.\n\n");	
						    system ("pause");
						    printf ("Redirecionando ao menu");
						    system ("cls");	
							}
				}
				
				else {
				printf ("\n\n");
			    system ("pause");
	            system ("cls");
				}	
				break;
				case 5:
				printf ("\n*Digite \"sim\" para confirmar e \"n�o\" para n�o confirmar.*");
				printf ("\n\nVoc� escolheu \"SALDO\". Gostaria de confirmar?\n:");
				scanf ("%s", confirm);
					if (strcmp(confirm,"sim")==0) {
					printf ("\n\n)");	
		            system ("cls");	
					printf ("Voc� est� em \"SALDO\".");
					
					
					printf ("\n\nSeu saldo agora � de: R$%.2f", saldo);
					printf ("\n\n");
					system ("pause");
					system ("cls");	
				    }  
				else {
				printf ("\n\n");
			    system ("pause");
	            system ("cls");	
				}
					
				break;
				
				default:	
				printf ("\n\n****************OPERA��O INV�LIDA****************");
				printf ("\n\n");
				system ("pause");
				system ("cls");
				break;
				}	
			}
	    }
				else {
				x++;//contador de acesso, contabiliza quantas tentativas foram feitas at� o limite de tr�s	
				system ("color 4f");
				printf ("\n\n****************ACESSO NEGADO.****************");
				printf ("\n\n");
				system ("pause");			
				system ("cls");
				}
	    
		    
	}	
		
	
		return 0;
}
