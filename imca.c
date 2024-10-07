#include <math.h> 
#include <stdio.h>
int main(void) { 
   float p, a, i; 
   printf("Qual o seu peso?(em quilos) "); 
   scanf("%f", &p); 
   printf("Qual a sua altura?(em metros) "); 
   scanf("%f", &a); 
   i = p / pow(a,2); 
   printf("IMC = %.2f\n", i); 
   if( i > 24.4 ) printf("Obeso\n"); 
   else printf("Normal\n"); 
   return 0; 
} 