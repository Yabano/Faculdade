#include <stdio.h>

int main()
{
    int V;

    scanf("%d", &V);

    int produto = V;
    for (int i = 0; i < 10; ++i)
    {
        printf("N[%d] = %d\n", i, produto);
        produto <<= 1; // shift operator = empurra os bits para o lado que a seta aponta pela quantidade implicada depois do sinal de =
    }

    return 0;
}