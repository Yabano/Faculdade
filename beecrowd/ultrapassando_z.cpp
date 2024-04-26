#include <stdio.h>

int main(){
    int x1,x2,conta,contador;

    scanf("%d",&x1);
    scanf("%d",&x2);

    while (x2 <= x1){
        scanf("%d",&x2);
    }

    conta += x1;
    
    for (contador = 1; conta < x2; contador++){
        conta += (x1+1);
        x1++;
    }
    
    printf("%d",contador);
    return 0;
}