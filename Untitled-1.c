#include <stdio.h>
int main (){
    int idade, p, i, mv=-1;

    printf("Quantos pacientes sao?");
    scanf("%d", &p);

    for(i=1; i<=p; i++){
        printf("idade?", i);
        scanf("%d", &idade);
        if(i>mv) mv = i;
    }
    printf("Maior idade= paciente %d\n", mv);
}