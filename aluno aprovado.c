#include <stdio.h>

int main() {
    float n1;
    float n2;
    float n3;
    float n4;
    float media;
 printf("Qual o valor de n1?");
 scanf("%f", &n1);
 printf("Qual o valor de n2?");
 scanf("%f", &n2);
 printf("Qual o valor de n3?");
 scanf("%f", &n3);
  printf("Qual o valor de n4?");
 scanf("%f", &n4);

 media = (( n1 + n2 + n3 + n4)/4); 

 printf ("a media do aluno e: %f", media);

    if ( media >= 7){
        printf("Aluno estara aprovado");
    }
    if ( media > 4 && media < 7) {
        printf("Aluno estara em exame final");
    }
     if ( 4 >= media ){
        printf("Aluno estara reprovado");
    }

}