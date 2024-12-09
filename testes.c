#include <stdio.h>
int main (){
    int a, i;
    float n, m, soma=0;

    printf("Quantos alunos sao?");
    scanf("%d", &a);
 
 for(i=1; i<=n; i++){
    printf("%da. Digite a nota dos alunos:", i);
    scanf("%f", &n);
    soma = soma + n;
 }
 m = soma/a;

 printf("a media dos alunos e: %.1f\n", m);
    }
