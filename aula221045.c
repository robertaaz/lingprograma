#include <stdio.h>

int main(){
    char sexo;
    float peso;
    float altura;

 printf("Digite o seu sexo");
 scanf("%c", &sexo);
 printf("Digite a sua altura");
 scanf("%f", &altura);

 if (sexo == 'f'){
    peso = 62.1 * altura - 44.7;
    printf("O seu peso ideal e %f", peso);
 }
  if (sexo == 'm'){
    peso = 72.7 * altura - 58;
    printf("O seu peso ideal e %f", peso);
 }
}