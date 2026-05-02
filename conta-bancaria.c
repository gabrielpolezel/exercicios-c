#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	float conta = 1000;
	float vetor[5];
	float tipo[5];
	int i = 0;
	
	printf("--------------------------\nCONTA BANCARIA\nPARA ACESSAR OS SERVIÇOS, DIGITE:\n1-SACAR\n2-DEPOSITAR\n3-VER SALDO\n4-EXTRATO\n5-SAIR\n--------------------------\n");
	
	int opcao = 0;
	
	while(opcao != 5){
		scanf(" %d", &opcao);
		switch(opcao){
			
			case 1: {
			
				printf("---------\nQUAL SERÁ O VALOR DO SAQUE?\n---------\n");
				int saque = 0;
				scanf(" %d", &saque);
				if(saque <= conta){
					conta -= saque;
					
					if(i < 5){
					vetor[i] = -(saque);
					tipo[i] = 0;
					i++;
					}
					
					printf("---------\nNOVO SALDO: %.2f\n---------\n", conta);
					printf("---------\nOQUE DESEJA FAZER A SEGUIR?\n---------\n");}
				else{
					printf("\nNÃO É POSSÍVEL REALIZAR O SAQUE. MOTIVO: SALDO INSUFICIENTE.\n");
					printf("---------\nOQUE DESEJA FAZER A SEGUIR?\n---------\n");}
					break;
			}
			
			case 2: {
				
				printf("---------\nQUAL SERÁ O VALOR DO DEPOSITO?\n---------\n");
				int deposito = 0;
				scanf(" %d", &deposito);
					conta += deposito;
					
					if(i < 5){
					vetor[i] = +(deposito);
					tipo[i] = 1;
					i++;
					}
					
					printf("---------\nNOVO SALDO: %.2f\n---------\n", conta);
					printf("---------\nOQUE DESEJA FAZER A SEGUIR?\n---------\n");
					break;
			}
			
			case 3: {
				
				printf(" SEU SALDO É DE: %.2f\n", conta);
				printf("---------\nOQUE DESEJA FAZER A SEGUIR?\n---------\n");
				break;
			}
			
			case 4: {
				
				for(int mostrar = 0; mostrar < i; mostrar++){
					if(tipo[mostrar] == 0){
						printf("SAQUE DE %.2f \n", vetor[mostrar]);
					}
					else if(tipo[mostrar] == 1){
						printf("DEPOSITO DE %.2f \n", vetor[mostrar]);
					}	
				}
				break;
			}
			
			case 5: {
				
				printf(" ATÉ LOGO.");
				break;
			}
			default: {
			    printf("OPÇÃO INVÁLIDA!\n\n");
			    break;
			}
			
		}
		
	}	
}
