#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){

    char nome[21];
    int distancia;
    double valor,conta=0.0,contador=0.0;

    while(scanf("%s %d",&nome,&distancia) != EOF){
    
        conta += (double)distancia;
        contador++;
        
    }
    valor = conta / contador;
    printf("%.1lf",valor);
    
    return 0;
}