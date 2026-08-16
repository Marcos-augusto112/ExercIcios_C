// Faça um programa que receba uma quantidade de segundos e converta esse valor para horas, minutos e segundos.


#include<stdio.h>

int main(){

float seg,horas,min;

printf("digite quantos segundos: ");
 scanf("%f",&seg);

min = seg / 60;
horas = min / 60;

printf("o total de horas sao: %f %f %f  ", seg, min, horas);

return 0;











}