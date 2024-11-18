#include <stdio.h>
int main (void){
    float  media=0;
    int i, t,nota;

    printf("Total de alunos?");
    scanf("%d", &t);
  
    for(i=1; i<=t; i++){
     printf("Informe a nota %d",i);
     scanf("%d", &nota);
     media = nota + media;

    }
    media = media/t;
    printf("A media sera: %f", media);

    return 0;

}