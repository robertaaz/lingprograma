#include <stdio.h>

int main(){
    int a;
    int b;
    float r;
    int soma;


    
 printf("Digite os 2 primeiros digitos do seu ano de nascimento:");
 scanf("%d", &a);
 printf("Digite os 2 ultimos digitos do seu ano de nascimento:");
 scanf("%d", &b);

  soma = a + b;
  printf("A soma dos seus numeros e %d", soma);
  
  r = soma % 5;
  printf("O resto da divisao e: %d / 5 = %f", soma, r);

 if ( r == 0){
    printf("Voce e timido");
    }
 if ( r == 1){
    printf("Voce e sonhador");
 }
 if ( r == 2){
    printf("Voce e paquerador");
 }
 if ( r == 3){
    printf("Voce e atraente");
 }
 if ( r == 4){
    printf("Voce e irresistivel");
 }

}