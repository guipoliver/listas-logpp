#include <stdio.h>

int main(){
int f1 = 0;
int f2 = 1;
int contador = 0;
    while (contador <= 15) {
    f1 = f1 + f2;
    f2 = f1 - f2;
    printf("%d\n", f1);
    contador++;
    }
}