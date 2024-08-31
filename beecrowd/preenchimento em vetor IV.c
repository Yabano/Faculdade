#include <stdio.h>
#include <stdlib.h>

void imprime(char *nome, int *vetor, int n){

for(int i = 0; i< n; i++){
        
        printf("%s[%d] = %d\n",nome,i,vetor[i]);
    }

}

int main(){
    int numero,numeros_pares,numeros_impares;
    int vec_num_par[5],vec_num_impar[5];
    
    
    numeros_impares = 0;
    numeros_pares = 0;
    
    for(int x = 0; x < 15;x++){
        scanf("%d",&numero);

        if(abs(numero) % 2){

            vec_num_impar[numeros_impares++] = numero;

            if(numeros_impares == 5)
                //imprime("impar",vec_num_impar,numeros_impares);
                numeros_impares = 0;
        }
        else{
            vec_num_par[numeros_pares++] = numero;
            
            if(numeros_pares == 5){
                //imprime("par",vec_num_par,numeros_pares);
                numeros_pares = 0;
            }

        }
    }
    //imprime("impar",vec_num_impar,numeros_impares);
    //imprime("par",vec_num_par,numeros_pares);
    
    return 0;
}
