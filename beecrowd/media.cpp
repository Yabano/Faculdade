#include <stdio.h>

int main() {
    int novo_calculo = 1;

    while (novo_calculo == 1) {
        double nota1, nota2;
        int nota1_valida = 0, nota2_valida = 0;

        while (!(nota1_valida && nota2_valida)) {
            double nota;
            scanf("%lf", &nota);

            if (nota < 0 || nota > 10) {
                printf("nota invalida\n");
            } else {
                if (!nota1_valida) {
                    nota1 = nota;
                    nota1_valida = 1;
                } else {
                    nota2 = nota;
                    nota2_valida = 1;
                }
            }
        }

        double media = (nota1 + nota2) / 2;
        printf("media = %.2f\n", media);

        novo_calculo = 0;
        while (novo_calculo != 1 && novo_calculo != 2) {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &novo_calculo);
        }
    }

    return 0;
}
