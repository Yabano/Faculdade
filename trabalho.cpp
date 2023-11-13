#include <iostream>

int main()
{   
    float saldo = 0.0, limiteChequeEspecial = 800.00;
    char nomeCliente[20];
    char saqueOuDeposito;
    
    // Criar Cliente
    printf("digite o nome do cliente\n");
    scanf("%[^\n]*c",&nomeCliente);

    printf("digite o número da conta do cliente\n");
    int numeroConta;
    scanf("%d",&numeroConta);

    // Verificar Cheque Especial
    printf("O cliente tem direito a cheque especial?");
    char chequeEspecial;
    scanf("%c",&chequeEspecial);
    if (chequeEspecial == 's'||'S'){saldo += limiteChequeEspecial}
    /*************************************************/

//     while (true){   
//     printf("O que deseja fazer?\n[1]Criar novo cliente [2]Verificar Saldo [3]Saque/Depósito [4]Aplicar dinheiro [5]Aquisição de cartão de crédito [6]Pagar fatura do cartão [7]Sair");
//     int escolha;
//     scanf("%d",&escolha);
    
//     // [1] Mudar dados do Cliente
//     if (escolha == 1){
//     printf("digite o novo nome do cliente\n");
//     scanf("%[^\n]*c",&nomeCliente);

//     printf("digite o novo número da conta do cliente\n");
//     int numeroConta;
//     scanf("%d",&numeroConta);

//     // Cheque Especial
//     printf("O novo cliente tem direito a cheque especial?");
//     char chequeEspecial;
//     scanf("%c",&chequeEspecial);
//     if (chequeEspecial == 's'||'S'){saldo += saldoSaque;}
//     }
//     /*************************************************/

//     // [2] Saldo
//     if (escolha == 2){
//     printf("\n-Saldo Cliente: R$%.2f\n", saldo);
//     printf("-Limite de Cheque Especial: R$%.2f\n",limiteChequeEspecial);
//     printf("====================================\n");
//     printf("-Saldo para Saque: R$%.2f\n",saldoSaque);
//     }
//     /*************************************************/

//     // [3] Saque / Deposito
//     if (escolha == 3){
//     printf("deseja sacar ou depositar?\nSaque (S) Deposito (D)");
//     scanf("%c",&saqueOuDeposito);
    
//     if (saqueOuDeposito == 'S'||'s')
//     {
//         printf("Quanto deseja sacar?\n");
//         float saque;
//         scanf("%.2f",&saque);
        
//         if (saque>saldo)
//         {
//             printf("voce está tentando sacar mais do que tem");
//         }
//         else
//         {
//         saldo = saldo - saque; 
//         }
//     }
    
//     else if (saqueOuDeposito == 'D'||'d')
//     {
//         printf("quanto deseja depositar?\n");
//         float deposito;
//         scanf("%.2f",&deposito);

//         saldo = saldo + deposito;
//     }
    
//     else{printf("verifique sua digitação");}
//     /*************************************************/    
//     }

//     // [4] Aplicação Financeira
//     if (escolha == 4){
//         if (saldo>0){
//             printf("Deseja aplicar em Fundos?\n Sim (S) | Não (N)");
//             char escolhaFundo;
//             scanf("%c",&escolhaFundo);
//             if (escolhaFundo == 'S'||'S'){
//             if (saqueOuDeposito == 'S'||'S'){printf("Voce não pode usar o saldo do cheque para comprar uma aplicação");}
//             else{
//                 saldo += saldo * 0.5;
//                 }
//             }
//         }
//     }
//     /*************************************************/
//     if (escolha == 7){return false;}
// }
  
}
