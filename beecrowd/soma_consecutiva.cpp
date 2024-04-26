#include <stdio.h>
int soma_consecutiva(); 


struct var{
    int a = 0;
    int n = 0;
};

int main() {

    soma_consecutiva();

    return 0;
}

int soma_consecutiva(){
    struct var variavel;
    scanf("%d %d",&variavel.a,&variavel.n);
    
    while(variavel.n <= 0){
        scanf("%d", &variavel.n);
    }
    int soma = 0;

    for (int i = 0; i < variavel.n; i++){
        soma += (variavel.a + i);
    }
    
    printf("%d",soma);

    return 0;
}