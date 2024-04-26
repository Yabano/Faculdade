#include <stdio.h>
#include <stdbool.h>

int is_prime(int num_primo){
    for (int i = 2; i*i <= num_primo; i++){
        if (num_primo % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    while (true){
        int tamanho_lista; 
        scanf("%d",&tamanho_lista);
        
        if (tamanho_lista == 0){
            break;
        }
        
        int lista[tamanho_lista];
        int posicao = 1;

        for(int i = 0; i < tamanho_lista; i++){
            lista[i] = posicao++;
        }

        int num_primo = 2;
        int start = 0;
        
        while( tamanho_lista > 1){
        bool primo = is_prime(num_primo);
            if (primo == true || num_primo == 2){
                start = (start + (num_primo-1)) % tamanho_lista;

                for(int i = start; i < tamanho_lista; i++){
                    lista[i] = lista[i+1];
                }
                tamanho_lista--;
            }
            num_primo++;
        }
        printf("%d\n",lista[0]);
    }
    return 0;
}

