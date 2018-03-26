#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* DESAFIO ******************************************************************************************************************************************
 *Elaborar um programa um que simule o funcionamento de um caixa eletrônico onde o usuário terá as seguintes opções:                                *
 *- consulta de saldo;																															    *
 *- saque;																																		    *
 *-depósito;																																	    *
 *-empréstimo pessoal com 5% juros;																													*	
 *- pagamento de contas;																														    *
 *O saldo inical da conta é de R$10.000,00																											*	
 *É obrigatório o uso de senha alfanumérica com 4 dígitos para qualquer operação;										                            *
 *Poderá ser feita quantas opões desejar;										 										 	 						*
 *Ao final deverá ser exibido o saldo da conta;																										*
 ****************************************************************************************************************************************************/

// PALOMA RANGEL INFO 1 - NOITE ETEC ZONA LESTE

int main(int argc, char *argv[]) {
	
	setlocale (LC_ALL,"portuguese");
	
	int opcao, cont = 1, x=1; // cont = contador, x = contador para teste de autentificaão de senha
	float  saldo = 10000, juro, vpagto, div, vsaque, deposito, emprestimo; //saldoinicial 10000; 
	char senha [5], conta[5], confirm[5], contap[30]; // contap= número da conta a pagar
	char str[10];
		

	while (x<=3) {
			
		system ("color 0f");	
		printf ("\nconta:  ");
		scanf ("%s", &conta); //numeração ou nome de sua escolha
		printf ("\nsenha:  ");
		scanf ("%s", &senha); // Senha de acesso: df89
			
			if (strcmp(senha,"df89")==0) {
			system ("cls");	
			
			while (cont!=0) {
			printf("******************************\n");
			puts ("|\tCAIXA ELETRÔNICO     |");
			printf("******************************\n");
			
			puts ("\n");
			printf("******************************\n");
			printf ("\nSAQUE\t\t\t1\nPAGAMENTO\t\t2\nDEPÓSITO\t\t3\nEMPRÉSTIMO\t\t4\nSALDO\t\t\t5\nSAIR\t\t\t0\n\n");	
		    printf("******************************\n");	
			scanf ("%d", &opcao);
			
			switch (opcao) { 
				case 0:
					printf ("\n*Digite \"sim\" para confirmar e \"não\" para não confirmar.*");
					printf ("\n\nDeseja sair? \n");
					scanf("%s", str);
					if(strcmp(str, "sim") == 0) {
	        
		            return 1; //encerra programa
	    			}
	    			else {
	    			system ("cls");	
	                // Continua a execuçao do programa 
	                } 
					break;	
				case 1:
				printf ("\n*Digite \"sim\" para confirmar e \"não\" para não confirmar.*");	
				printf ("\n\nVocê escolheu \"SAQUE\". Gostaria de confirmar?\n\n:");
				scanf ("%s", &confirm);
					if (strcmp(confirm,"sim")==0) {
					system ("cls");	
					printf ("Você está em \"SAQUE\".");
					printf ("\n\nDigite o valor a retirar:  ");
					scanf ("%f", &vsaque);
				    
				        printf ("\n*Digite \"sim\" para confirmar e \"não\" para não confirmar.*");
						printf ("\n\nConfirmar saque?\n\n:");
					    scanf ("%s", confirm);
					
						if (strcmp(confirm,"sim")==0) {
							
						system ("cls");
						
						saldo=saldo-vsaque;
		
						puts ("\tSAQUE REALIZADO");
						
						printf ("\nVocê retirou R$%.2f da conta.", vsaque);	
						printf ("\n\nSeu saldo agora é de: R$%.2f", saldo);
						printf ("\n\n");
						system ("pause");
						system ("cls");		
					    }
						    else {
							    printf ("\n\nSaque não realizado.\n\n");	
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
			    printf ("\n*Digite \"sim\" para confirmar e \"não\" para não confirmar.*");
				printf ("\n\nVocê escolheu \"PAGAMENTO\". Gostaria de confirmar?\n\n:");
				scanf ("%s", &confirm);
					
					if (strcmp(confirm,"sim")==0) {
					system ("cls");	
					printf ("Você está em \"PAGAMENTO\".");
					printf ("\n\nDigite número de conta:  ");
					scanf ("%s", &contap);
					printf ("\nDigite valor do pagamento: ");
					scanf ("%f", &vpagto);
					
					printf ("\n*Digite \"sim\" para confirmar e \"não\" para não confirmar.*");
					printf ("\n\nConfirmar pagamento?\n:");
				    scanf ("%s", confirm);
					
						if (strcmp(confirm,"sim")==0) {
						
						system ("cls");
						
						saldo=saldo-vpagto;
						
						puts ("\tPAGAMENTO REALIZADO");
						
						printf ("\n\nVocê fez um pagamento de: R$%.2f", vpagto);
						printf ("\n\nSeu saldo agora é de: R$%.2f", saldo);
						printf ("\n\n");
						system ("pause");
						system ("cls");	
				        }
						   else {
						   printf ("\n\nPagamento não realizado.\n\n");	
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
				printf ("\n*Digite \"sim\" para confirmar e \"não\" para não confirmar.*");
				printf ("\n\nVocê escolheu \"DEPÓSITO\". Gostaria de confirmar?\n\n:");
				scanf ("%s", confirm);
					if (strcmp(confirm,"sim")==0) {
					system ("cls");	
					printf ("Você está em \"DEPÓSITO\".");	
					printf ("\n\nDigite valor do depósito:  ");
					scanf ("%f", &deposito);
				    
					printf ("\n*Digite \"sim\" para confirmar e \"não\" para não confirmar.*");
					printf ("\n\nConfirmar depósito?\n\n:");
				    scanf ("%s", confirm);
					    
						 if (strcmp(confirm,"sim")==0) {
						
						system ("cls");
						
						saldo= saldo+deposito;
						
						puts ("\tDEPÓSITO REALIZADO");
						printf ("\n\nVocê depositou: R$%.2f", deposito);
						printf ("\n\nSeu saldo agora é de: R$%.2f", saldo);
						printf ("\n\n");
						system ("pause");
						system ("cls");			
					    }
				   
				    else {
				    printf ("\n\nDepósito não realizado.\n\n");	
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
				printf ("\n*Digite \"sim\" para confirmar e \"não\" para não confirmar.*");
				printf ("\n\nVocê escolheu \"EMPRÉSTIMO\". Gostaria de confirmar?\n\n:");
				scanf ("%s", confirm);
					if (strcmp(confirm,"sim")==0) {
					system ("cls");	
					printf ("\n\nVocê está em \"EMPRÉSTIMO\".");
					printf ("\n\nDigite valor do empréstimo:  ");
					scanf ("%f", &emprestimo);
				    
				    
				    printf ("\n*Digite \"sim\" para confirmar e \"não\" para não confirmar.*");
				    printf ("\n\nConfirmar empréstimo?\n\n:");
				    scanf ("%s", confirm);
					    
						if (strcmp(confirm,"sim")==0) {
				    
						juro = emprestimo * 0.05;
						saldo = saldo + emprestimo;
						div = emprestimo + juro;
					
						printf ("\n\nO valor de juros no empréstimo de R$%.2f com percentual de 5 é: R$%.2f", emprestimo, juro);
						printf ("\n\nSeu saldo agora é de: R$%.2f", saldo);
						printf("\n\nDívida de: R$%.2f", div);
						printf ("\n\n");
						system ("pause");
						system ("cls");	
				        }
						    else {
						    printf ("\n\nEmpréstimo não realizado.\n\n");	
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
				printf ("\n*Digite \"sim\" para confirmar e \"não\" para não confirmar.*");
				printf ("\n\nVocê escolheu \"SALDO\". Gostaria de confirmar?\n:");
				scanf ("%s", confirm);
					if (strcmp(confirm,"sim")==0) {
					printf ("\n\n)");	
		            system ("cls");	
					printf ("Você está em \"SALDO\".");
					
					
					printf ("\n\nSeu saldo agora é de: R$%.2f", saldo);
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
				printf ("\n\n****************OPERAÇÃO INVÁLIDA****************");
				printf ("\n\n");
				system ("pause");
				system ("cls");
				break;
				}	
			}
	    }
				else {
				x++;//contador de acesso, contabiliza quantas tentativas foram feitas até o limite de três	
				system ("color 4f");
				printf ("\n\n****************ACESSO NEGADO.****************");
				printf ("\n\n");
				system ("pause");			
				system ("cls");
				}
	    
		    
	}	
		
	
		return 0;
}
