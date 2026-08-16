// Faça um programa que receba dois números inteiros e mostre a soma, a subtração, a multiplicação e a divisão entre eles.

#include <stdio.h>

int main(){

int n1,n2,soma,sub,mult,div;

printf("digite um numero: ");
 scanf("%i",&n1);

printf("digite outro numero: ");
 scanf("%i",&n2);

 soma = n1 + n2;
 sub = n1 - n2;
 mult = n1 * n2;
 div = n1 / n2;

 printf("soma: %i\n ",soma);
 printf("sub: %i\n ",sub);
 printf("mult: %i \n",mult);
 printf("div: %i \n",div);

return 0;





}