#include <stdio.h>
#include <math.h>

int main(){
    float A, C;

    printf("digite quantos dolares voce deseja fazer o cambio:");
    scanf("%f", &A);

    C = A * 2.4;
    printf("o valor em reais é:%.2f", C);
}