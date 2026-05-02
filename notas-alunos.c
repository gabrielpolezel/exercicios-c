#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
	
	srand(time(NULL));
	
	char *nomes[] = {"Ana", "Bruno", "Carlos", "Diego", "Eva", "Fernanda", "Gabriel", "Helena", "Igor", "Julia", "Kevin", "Laura", "Marcos", "Natalia", "Otavio", "Patricia", "Rafael", "Sabrina", "Thiago", "Ursula"};
	
	printf("------------------------------\nNOTAS DOS ALUNOS\n");
	
	for(int i = 0; i < 10; i++){
		int sorteio = 0;
		sorteio = rand()% 20;
		int num = 0;
		num = rand()% 10 + 1;
		
		switch(num){
			case 10: 
			case 9:
				printf("ALUNO: %s NOTA %d: EXCELENTE!\n", nomes[sorteio], num);
				break;
			case 8:
			case 7:
				printf("ALUNO: %s NOTA %d: BOM!\n", nomes[sorteio], num);
				break;
			case 6:
			case 5:
				printf("ALUNO: %s NOTA %d: REGULAR!\n", nomes[sorteio], num);
				break;
			case 4:
			case 3:
			case 2:
			case 1:
				printf("ALUNO: %s NOTA %d: ABAIXO DO ESPERADO!\n", nomes[sorteio], num);
				break;
		}
		}
}
