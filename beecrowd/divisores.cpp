#include <stdio.h>

int main(){
    int x;

    scanf("%d",&x);

    for(int y = 1; y <= x; y++){
        if(x % y == 0){
            printf("%d\n",y);
        }
    }
}