#include <stdio.h>

int MDC(int a, int b){

    return(b == 0) ? a : MDC(b, a % b);
}

int main(){

    int nCasos, fig1,fig2;
    scanf("%d",&nCasos);

    for(int x = 0; x < nCasos; x++){
        scanf("%d %d", &fig1,&fig2);
        printf("%d\n",MDC(fig1,fig2));

    }
    return 0;
}