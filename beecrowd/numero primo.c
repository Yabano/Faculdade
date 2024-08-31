#include <stdio.h>
#define NMAX 10000001

int C[NMAX];

void Crivo()
{
    for (int i = 0; i < NMAX; ++i)
    {
        C[i] = 1;
    }
    C[1] = 0;

    for (int i = 4; i < NMAX; i += 2)
    {
        C[i] = 0;
    }

    for (int i = 3; i < NMAX; i += 2)
    {
        if (C[i] == 1)
        {
            for (int j = i * 3; j < NMAX; j += 2 * i)
            {
                C[j] = 0;
            }
        }
    }
}

int main(){

    int N, X;
    
    Crivo();

    scanf("%d",&N);

    for (int i = 0; i < N; i++){
        scanf("%d",&X);

        if (C[X]){
            printf("%d eh primo\n", X);
        }
        else{
            printf("%d nao eh primo\n", X);
        }
    }
    return 0;
}