#include <stdio.h>

int main() {
    float valor;
    float largura;
    float comprimento;
    float total; 
    
 printf("Comprimento da sala:");
 scanf("%f", &comprimento);
 printf("Largura da sala:");
 scanf("%f", &largura);
 printf("Valor por metro quadrado:");
 scanf("%f", &valor);
 total = (comprimento * largura * valor); 
 printf("Valor total do carpete: %f", total);

}