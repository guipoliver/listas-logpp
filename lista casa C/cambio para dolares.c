#include <stdio.h>
#include <math.h>

int main(){
    float A, C;

    printf("digite quantos reais voce deseja fazer o cambio:");
    scanf("%f", &A);

    C = A / 2.4;
    printf("o valor em dolares é:%.2f", C);
}