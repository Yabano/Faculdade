#include <stdio.h>

int fatorial(int);

int main(){
    int num;

    scanf("%d",&num);

    fatorial(num);
}

int fatorial(int num){
    int conta = num;
    for (int x = (conta-1); x > 0; x--){
        conta *= x;
    }
    printf("%d",conta);
    return 0;
}