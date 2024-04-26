#include <stdio.h>

int main() {
    int NC, y;
    scanf("%d", &NC);
    y = 1;

    while (y <= NC) {
        int quant_pessoas, steps;
        scanf("%d %d", &quant_pessoas, &steps);

        int lista[quant_pessoas];
        int x = 1;

        // Initialize the list with numbers from 1 to quant_pessoas
        for (int i = 0; i < quant_pessoas; i++) {
            lista[i] = x++;
        }

        int start = 0;

        // Simulate the elimination process
        while (quant_pessoas > 1) {
            start = (start + (steps - 1)) % quant_pessoas;
            
            // Shift elements to the left to delete the element at index 'start'
            for (int i = start; i < quant_pessoas - 1; i++) {
                lista[i] = lista[i + 1];
            }
            quant_pessoas--;
        }
        
        printf("Case %d: %d\n", y, lista[0]);
        y++;
    }

    return 0;
}