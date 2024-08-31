#include <stdio.h> 
  
int main(){ 

    int dimensao_dos_pixels;
    
    printf("Digite a dimensao dos pixels e o tamanho do tabuleiro\n");
    scanf("%d",&dimensao_dos_pixels);

    // cria o arquivo com nome xadrez
    FILE* xadrez; 
    xadrez = fopen("xadrez.pgm", "wb");
    
    // P1/P2/P3/P4/P5
    fprintf(xadrez, "P2\n");

    int colunas_da_matriz = dimensao_dos_pixels *8;
    int linhas_da_matriz = dimensao_dos_pixels * 8;

    fprintf(xadrez, "%d %d\n", colunas_da_matriz, linhas_da_matriz);  
  
    
    fprintf(xadrez, "10\n");  

    for (int i = 0; i < linhas_da_matriz; i++){
        for (int j = 0; j < colunas_da_matriz; j++){
            if(((i/dimensao_dos_pixels)+(j/dimensao_dos_pixels))%2 == 0){
                fprintf(xadrez,"10 ");
            }
            else{
                fprintf(xadrez,"0 ");
            }
        
        }
        fprintf(xadrez, "\n");
    }
 
    fclose(xadrez);
    return 0;
} 

// #include <stdio.h>

// int xadrez(int, int);

// int main() {
//     int N,G;
//     scanf("%d",&N);
//     scanf("%d",&G);
//     xadrez(N,G);
//     return 0;
// }

// int xadrez(int N, int G){
//     int altura=N*8;
//     int largura=N*8;
//     printf("P2\n%d %d\n%d\n",altura+2,largura+2,G);

//     for(int i=0;i<largura+2;i++){
//         printf("0\t");
//         if(i==largura+1){
//             printf("\n");
//         }
//     }
//     for(int x=0;x<altura;x++){
//         for(int y=0;y<largura;y++){
//             if(y==0){
//                 printf("0 \t");
//             }
//             if((x/N+y/N)%2==0){
//                 printf("%d\t",G);
//             }else{
//                 printf("0\t");
//             }
//             if(y==largura-1){
//                 printf("0\t");
//             }

//         }
//         printf("\n");
//     }
//     for(int i=0;i<largura+2;i++){
//         printf("0\t");
//     }

// }