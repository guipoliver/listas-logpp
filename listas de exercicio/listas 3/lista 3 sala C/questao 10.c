#include <stdio.h>

int main(){
int contador = 0;
int pares;
    while (contador <= 500) {
    if (contador % 2 == 0){
    printf("%d é par\n", contador);
    pares = contador + pares;
    } if (contador == 500) {
    printf("a soma de todos os pares até o 500 é = a %d", pares);
    }
    contador ++;
    }
}