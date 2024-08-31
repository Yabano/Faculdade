#include <stdio.h>

void xadrez(int, int);


int main(){

    int N, G;

    scanf("%d %d", &N,&G);

    xadrez(N,G);

    return 0;
}

void xadrez(int N, int G){

    int tamanho_tabuleiro = N*8;
    
    printf("P2\n");
    printf("%d %d\n",tamanho_tabuleiro,tamanho_tabuleiro);
    printf("%d\n",G);

    for (int linhas = 0; linhas < tamanho_tabuleiro; linhas++){
        
        for (int col = 0; col < tamanho_tabuleiro; col++){
            if(((linhas/N)+(col/N)) % 2 == 0){
                printf("%d ",G);
            }
            else{
                printf("0 ");
            }
        }
        printf("\n");
    }
    
}