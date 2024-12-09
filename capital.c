#include <stdio.h>
int main (){
    int c, p, i;
    float t;

    printf("Qual o valor do capital?");
    scanf("%d", &c);
    printf("Qual o valor dos juros?");
    scanf("%f", &t);
    printf("Qual a quantidade de meses?");
    scanf("%d", &p);
    
    for(i=1; i<=p; i++){
        c = (1+t/100) * p;
        printf("%do. mes: R$ %.2d\n", i, c);
    }
    }