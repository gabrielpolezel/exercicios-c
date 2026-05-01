#include <locale.h>
#include <stdio.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    int vetor[] = {5, 2, 9, 1, 5, 6};
    int repetido = 0;

    for(int i = 0; i < 6; i++){
        repetido = 0;
        for(int j = 0; j < i; j++){
            if(vetor[i] == vetor[j]){
                repetido++;
            }
        }
        if(repetido == 0){
            printf(" %d ", vetor[i]);
        }
    } 
    return 0;
}