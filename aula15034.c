#include <stdio.h>

int main (){
    float l1;
    float l2;
    float l3;
    printf ("Qual o valor de L1?");
    scanf("%f", &l1);
    printf("Qual o valor de L2?");
    scanf("%f", &l2);
    printf("Qual o valor de L3?");
    scanf("%f", &l3);

 if (l1 + l2 > l3 && l2 + l3 > l1 && l3 + l1 > l2){
    printf ("os tres lados formam um triangulo");

    if (l1 == l2 && l1 == l3)
    printf ("o triangulo e equilatero");
      else 
         if ( l1 == l2 || l2 == l3 || l1 == l3)
         printf ("o triangulo e isoceles");
      else 
         printf ("O triangulo e escaleno");

 }
 else 
 printf("os lados nao formam um triangulo");
}