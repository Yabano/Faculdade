#include <stdio.h>

int main(){
    char T;
    float conta, valor;
    int contador; 
    scanf("%c",&T);

    for(int x = 0; x < 12; x++){

        for(int y = 0; y < 12; y++){

            scanf("%f",&valor);

            if((x < y) && (x < y && x < 11 - y)){
                conta += valor;
                contador++;

            }
        }
    }
    printf("%.1lf\n", T == 'S' ? conta : conta / contador);

    return 0;
}