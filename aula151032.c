#include <stdio.h>

int main() {
    float produzidas;
    float produzidasruins;
    float porcentagem;


 printf("Quantas pecas produzidas?");
 scanf("%f", &produzidas);
 printf("Quantas pecas ruins?");
 scanf("%f", &produzidasruins);

 porcentagem = (produzidasruins * 0.1);

  if (porcentagem > produzidasruins){
    printf ("A maquina nao precisa de manutencao");
  }
 if (porcentagem < produzidasruins){
    printf ("A maquina precisa precisa de manutencao");
  }
}