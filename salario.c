/* Tendo como entrada o total (em R$)
vendido por um funcionário no mês
de abril, faça um algoritmo que
mostre a sua comissão e salário
bruto neste mês, sabendo que o
seu salário base é R$1.200,00
e sua comissão é de 10% sobre
o total vendido.*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    float total_vendas;
    float salario, salario_bruto;
    float comissao;
    
    salario=1200;

    printf("Informe o total de vendas em R$:");
    scanf("%f",&total_vendas);
    comissao=0.1*total_vendas;
    salario_bruto=salario+comissao;
    printf("O salario bruto neste mes e:%f",salario_bruto);
    return 0;
}