#include<stdio.h>

int main()
{
    int quantidade;
    float preco_unitario, valor_final;
    printf("qual a quantidade de cafes? ");
    scanf("%d", &quantidade);
    printf("Qual o preço unitário? ");
    scanf("%f", &preco_unitario);
    valor_final = quantidade*preco_unitario;
    printf("Total a pagar: R$ %.2f", valor_final);
    return 0;

}
