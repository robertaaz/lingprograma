#include <stdio.h>

int main() {
    float quilometros;
    float litros;
    float consumo;
 printf("Quilometros?");
 scanf("%f", &quilometros);
 printf("Litros?");
 scanf("%f", &litros);
 consumo = quilometros / litros; 
 printf("Consumo medio do veiculo: %f", consumo);

}