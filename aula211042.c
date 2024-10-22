#include <stdio.h>

int main(){
    char operacao;

 printf("Qual operacao deseja fazer?");
 scanf("%c", &operacao);

    if(operacao == '1'){
     printf("saldo");
    }
     if(operacao == '2'){
     printf("extrato");
     }
     if(operacao == '3'){
     printf("saque");
     }
     if(operacao == '4'){
     printf("sair");
    }

   
 
}