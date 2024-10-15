#include <stdio.h>

int main() {
    float copias;
    float preco;
    float total; 


 printf("Quantas copias?");
 scanf("%f", &copias);
 
 preco = 0.25;
    if ( copias > 100){
        preco = 0.20;

    }
 total = preco * copias;
 printf ("o total sera: %f", total);
  
}