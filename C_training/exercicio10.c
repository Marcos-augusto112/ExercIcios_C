// Exercício 10 — Classificação de idade

// Faça um programa que receba a idade de uma pessoa e informe sua classificação:

// De 0 a 12 anos: criança
// De 13 a 17 anos: adolescente
// De 18 a 59 anos: adulto
// 60 anos ou mais: idoso

#include<stdio.h>
 int main(){
 
    int idade;

    printf("Digite sua idade  ");
    scanf("%i",&idade);

    if (idade <=12 ){
     printf("crianca ");
    }
else if (idade <= 18){
 printf("adolescente");
}

else if (idade <= 59){


 printf("adulto");
}

else {
 print("idoso");

}

return 0;

 }
