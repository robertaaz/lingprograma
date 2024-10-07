#include <stdio.h>

int main() {
    float peso;
    float imc;
    float altura;
 printf("Qual o seu peso?");
 scanf("%f", &peso);
 printf("Qual a sua altura?");
 scanf("%f", &altura);
 imc = peso / (altura * altura); 
 printf("Imc: %f", imc);

}