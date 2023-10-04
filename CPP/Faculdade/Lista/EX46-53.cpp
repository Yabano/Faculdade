// EX 46

#include<iostream>

int main() {
    int numero, numeroInvertido = 0;

    printf("Digite um número inteiro de três dígitos (de 100 a 999): ");
    scanf("%d",&numero);

    if (numero >= 100 && numero <= 999) {
      
        while (numero != 0) {
            int digito = numero % 10;
            numeroInvertido = numeroInvertido * 10 + digito;
            numero /= 10;
        }
        printf("O número invertido é: %d",numeroInvertido);
    } 
    else {
        printf("Número inválido. Por favor, digite um número de três dígitos.");
    
    }
    return 0;
}

//EX 47

// #include <iostream>

// int main(int argc, char const *argv[])
// {
//     int numero;
//     printf ("digite um numero de 4 digitos: ");
//     scanf("%d", &numero);

//     int contaUnidade = numero / 1000;
//     int contaDezena = numero % 1000 /100;
//     int contaCentena = numero % 1000 % 100 /10;
//     int contaMilhar = numero % 1000 % 100 % 10;
//     printf("%d\n",contaUnidade);
//     printf("%d\n",contaDezena);
//     printf("%d\n",contaCentena);
//     printf("%d\n",contaMilhar);

//     return 0;
// }

//EX 48

#include<iostream>

int main(int argc, char const *argv[])
{
    int segundos;
    printf("digite um valor em segundos para ser convertido: ");
    scanf("%d",&segundos);

    int contaHora = segundos /3600;
    int contaMin = segundos / 60;
    if(contaMin >60){
        contaHora++;
    }
    int contaSeg = segundos % 60;

    printf("%d:%d:%d",contaHora, contaMin,contaSeg);

    return 0;
}
