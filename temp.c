/* Ex1.
Faça um algoritmo que receba como
entrada uma determinada temperatura
em graus Celsius e mostre  a temperatura
em Fahrenheit.
Fahrenheit = (9/5)*(Celsius) + 32
*/

// inclusão das libs
#include<stdio.h>
#include<stdlib.h>

int main()
{
    //Declaração das variáveis
    float temp_C,temp_F;

    //leitura da temperetura em °C
    printf("\nEntre com a temperatura em °C:\n");
    scanf ("%f",&temp_C);

    //Calculo da temperatura em °F
    temp_F = (9/5)*temp_C+32;

    //Escrita da temperatura em °F
    printf("\nA temperatura em °F e:\n%f",temp_F);
    return 0;
}