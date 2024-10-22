#include <stdio.h>
#include <math.h>

int main(){
    float a;
    float b;
    char y;
    float resultado;

 printf("Qual a operacao deseja realizar?");
 scanf("%c", &y);

 printf("Digite o primeiro numero:");
 scanf("%f", &a);
 printf("Digite o segundo numero");
 scanf("%f", &b);


 if (y == '+'){ 
    resultado = a + b;
 }
 if (y == '-'){
    resultado = a - b;
 }
 if (y == '/'){
    resultado = a / b;
 }
 if (y == '*'){
    resultado = a * b;
 }
 printf("Seu resultado sera %f",resultado);
 
}