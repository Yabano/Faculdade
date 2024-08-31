#include <stdio.h>
#include <string.h>
long long int F[21];

long long int fato(int num){
    if(F[num] == 0){
        F[num] = num * fato(num - 1);
    }
    return F[num];
}

int main() {
    
    int fat1,fat2;
    
    memset(F,0,sizeof(F));
    F[0] = 1;

    while(scanf("%d %d", &fat1,&fat2) != EOF){
        printf("%lld\n",fato(fat1) + fato(fat2));
    }

    return 0;
}