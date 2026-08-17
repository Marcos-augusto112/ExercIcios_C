
// Exercício 9 — Maior de dois números

// Faça um programa que receba dois números e informe qual deles é maior. Caso os dois números sejam iguais, informe que eles possuem o mesmo valor.

#include<stdio.h>
 
 int main(){

 int A,B;

printf("Digite um numero: ");
 scanf("%i",&A);
printf("Digite outro numero: ");
 scanf("%i",&B);
  
if (A > B) 
 printf("O primeiro numero e maior \n",A);
  else if (B>A)
  {
   printf("O segundo numero e maior \n",B);
  }
 else if (A=B)
 {
   printf("Os numeros sao iguais: %i e %i ",A,B);
 }
 
return 0;



 }