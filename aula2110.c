#include <stdio.h>

int main (){

    char civil;

    printf("Informe o estado civil");
    scanf("%c", &civil);


    if(civil == 's'){
     printf("o seu estado civil e solteiro");
    }
     if(civil == 'c'){
     printf("o seu estado civil e casado");
     }
     if(civil == 'd'){
     printf("o seu estado civil e divorciado");
     }
     if(civil == 'v'){
     printf("o seu estado civil e viuva");
    }

}