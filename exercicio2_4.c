#include <stdio.h>

int main() {
    float arquivo;
    float velocidade;
    float tempo;
 printf("Tamanho do arquivo:");
 scanf("%f", &arquivo);
 printf("Velocidade do arquivo?");
 scanf("%f", &velocidade);
 tempo = arquivo / velocidade; 
 printf("O tempo sera: %f", tempo);

}