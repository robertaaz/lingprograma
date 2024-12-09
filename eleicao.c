#include <stdio.h>
int main (){
    int e, i, a=0, b=0, c=0;
    char v;

    printf("Total de eleitores?");
    scanf("%d", &e);

 for(i=1; i<=e; i++){

 printf("informe o voto do eleitor:%d\n", i);
 scanf("%c", &v);
 scanf("%c", &v);

 if(v== 'a'){
    a++;
 }
 if(v== 'b'){
    b++;
 }
 if(v== 'c'){
    c++;
 }
 }
 printf("o resultado da eleicao para a: %d\n", a);
 printf("o resultado da eleicao para b: %d\n", b);
 printf("o resultado da eleicao para c: %d\n", c);
}