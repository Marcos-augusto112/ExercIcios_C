// Exercício 5 — Compra no mercado

// Uma pessoa comprou três produtos. Faça um programa que receba a quantidade e o preço de cada produto e calcule o valor total da compra.


#include<stdio.h>

 int main(){

float n1,n2,n3,soma;

 printf("digite o valor da primeira compra: ");
  scanf("%f",&n1);

 printf("digite o valor da segunda compra: ");
  scanf("%f",&n2);

  printf("digite o valor da terceira compra: ");
   scanf("%f",&n3);

   soma = n1 + n2 + n3;

   printf("a soma das compras: %f",soma);

   return 0;







 }