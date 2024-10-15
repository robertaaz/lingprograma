#include <stdio.h>

int main (){
    float idade;
    float categoria; 
    
    
    printf ("Qual a idade do nadador?");
    scanf ("%f", &idade);

 categoria = idade; 

    if (idade <= 10){
        printf("Categoria: Infantil");

    }
    if (idade > 10 && idade < 17 ){
        printf("Categoria: Juvenil");
        
    }
    if (idade >= 17){
        printf("Categoria: Senior");
        
    }
}