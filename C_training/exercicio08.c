// Faça um programa que receba dois números inteiros armazenados nas variáveis A e B. Depois, troque os valores entre elas, fazendo com que o valor de A passe para B e o valor de B passe para A.


#include<stdio.h>

int main(){

int A,B,C,D;


printf("Digite o primeiro numero: ");
  scanf("%i",&A);


printf("Digite o outro numero :");
  scanf("%i",&B);

C=A;
D=B;
A=D;
B=C;

printf("o valor inverso de A deu: %i\n",D);
 
printf("o valor inverso de B deu: %i\n",C);
 

return 0;

}