#include <stdio.h>

void menor(int *vetor, int numero){
    int menor = vetor[0];
    int posicao = 0;
    for(int x = 0; x < numero; x++){
        if(menor > vetor[x]){
            menor = vetor[x];
            posicao = x;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n",menor,posicao);
}
    
int main() {
    int tamanho_array;
    
    scanf("%d",&tamanho_array);
    
    int vetor[tamanho_array];
    
    for(int x = 0; x < tamanho_array; x++){
        scanf("%d",&vetor[x]);
        
    }
    
    menor(vetor,tamanho_array);

    return 0;
}