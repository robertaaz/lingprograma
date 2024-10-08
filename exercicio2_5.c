#include <stdio.h>
#include <math.h>
int main() {
 float c;
 float j;
 float f;
 float m;

 printf("Qual o valor do consumo?");
 scanf("%f", &c);
 printf("Qual o valor do Juros fixo?");
 scanf("%f", &j);
 printf("Qual e a quantidade de meses que serao utilizados?");
 scanf("%f", &m);

  f = c *pow ((1+j/100),m);
  printf ("O montante F sera: %f", f);

}