/* exercio 8.1 */
#include <stdio.h>
 void contagem(int n){
 int v=n; 
 while (v>=0){
    printf("%d", v);
    v--;

 }
 }

 int main(){
    int n;

    printf("Digite um numero:");
    scanf("%d", &n);
    contagem(n);

 }
 