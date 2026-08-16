// Faça um programa que receba o salário atual de um funcionário, a quantidade de horas extras trabalhadas e o valor pago por cada hora extra. Calcule e mostre o salário final.

#include<stdio.h>

int main(){

float salario,horas_ext,valor_horas,salario_total;

printf("digite seu salario atual: ");
  scanf("%f",&salario);

 printf("digite quantas horas extras trabalhadas: ");
  scanf("%f",&horas_ext);

  printf("digite o valor das horas extras: ");
   scanf("%f",&valor_horas);


salario_total = horas_ext * valor_horas;
salario_total = salario + salario_total;

printf("Salario total esse mes deu: %f ",salario_total);


return 0;






}
