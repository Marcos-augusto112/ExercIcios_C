// Faça um programa que receba uma temperatura em Celsius e converta para Fahrenheit usando a fórmula:

// F = (C × 9 / 5) + 32


#include<stdio.h>

int main(){

int f,c;

printf("digite quantos graus celsius: ");
 scanf("%i",&c);

f = (c * 9 / 5) + 32;

printf("Conversao: %i ",f);

return 0;



}