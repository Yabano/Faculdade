#include <stdio.h>
#include <string.h>

int main(){
    char *pos;
    char frutas[10000];
    int casos,contador_frutas;
    double preco,pesoPorDia,gastoPorDia;
    
    scanf("%d\n",&casos);

    pesoPorDia = 0.0;
    gastoPorDia = 0.0;

    for(int x = 1; x <=casos; x++){
        scanf("%lf\n",&preco);
        scanf("%[^\n]",&frutas); // por algum motivo com %s dava errado
    
        contador_frutas = 1;
        pos = strchr(frutas, ' ');
        while(pos != NULL){
            contador_frutas++;
            pos = strchr(pos + 1, ' ');
        }
        
        printf("day %d: %d kg\n", x, contador_frutas);


        gastoPorDia += preco;
        pesoPorDia += contador_frutas;

}
    gastoPorDia /= casos;
    pesoPorDia /= casos;

    printf("%.2lf kg by day\nR$ %.2lf by day\n", pesoPorDia, gastoPorDia);
    
    return 0;
}