#include <stdio.h>

unsigned long long potencia(int base, int expoente){
    if(base == 1){
        return base;
    }
    if(expoente % 2){
        return base * potencia(base, expoente - 1);
    }
    unsigned long long p = potencia(base, expoente / 2);

    return p * p;

}

unsigned long long soma(int a0, int q, int n){

    return a0 * (potencia(q,n) -1) / (q - 1);

}

int main(){
    int N, Y;

    scanf("%d",&N);

    for (int i = 0; i < N; i++){

        scanf("%d",&Y);

        printf("%llu", soma(1,2, Y) / 12000);
    }

    return 0;
}