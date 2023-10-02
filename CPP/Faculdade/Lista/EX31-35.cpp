/*
EX 31

#include <iostream>

int main()
{
    //const int a = 5;
    //int menos = a - 1;
    //int mais = a + 1;
    //printf("menos = %d",menos,"seu numero = %d",a,"mais = %d",mais);  ????

    int a;

    printf("digite seu numero: ");
    scanf("%d",&a);

    int menos = a - 1;
    int mais = a + 1;

    printf("numero anterior = %d \n", menos);
    printf("seu numero = %d \n", a);
    printf("proximo numero = %d \n", mais);

    return 0;
}
*/

/*  
EX 32
        
#include <iostream>

int main()
{
    int a;

    printf("digite seu numero: ");
    scanf("%d",&a);
    printf("seu numero e: %d \n",a);

    int antecessor = (a - 1)*2;
    int sucessor = (a + 1)*3;

    int resposta = antecessor + sucessor;
    
    printf("antecessor = %d \n",antecessor);
    printf("sucessor = %d \n",sucessor);

    printf("resposta= %d \n", resposta);
    
    return 0;
}
*/


/*
EX 33

#include <iostream>

int main(int argc, char const *argv[])
{
    float base, altura, conta;

    printf("digite o valor de um dos lados de um quadrado: ");
    scanf("%f", &base);

    printf("digite o valor da altura do quadrado: ");
    scanf("%f", &altura);

    conta = base * altura;

    printf("altura = %f\nlado = %f\nsoma = %f",altura,base,conta);

    return 0;
}
*/

/*
EX 34

#include <iostream>
#include <math.h>

main(){

    float raio;
    float area;
    const float pi = 3.141592;

    printf("digite o valor do raio de um circulo: ");
    scanf("%f", &raio);
    
    area = pi * pow(raio,2);

    printf("valor da area = %f",area);
    
    return 0;

}
*/

//EX 35
//
// #include <iostream>
// #include <math.h>

// int main(int argc, char const *argv[])
// {
//     float x,y,res,teste,test;

//     printf("digite os valores de x e y: ");
//     scanf("%f %f", &x, &y);

//     res = pow(pow(x,2)+pow(y,2),0.5);

//     teste = pow(x,2)+pow(y,2);
//     test = sqrt(teste);


//     printf("teste 1 : %f", res);

//     printf("teste 2 : %f", test);

//     return 0;
// }





