#include <stdio.h>
#include <math.h>

int main(){
    float A, B;
    B = 2;

    printf("Digite um valor para A:");
    scanf("%f", &A);

    B = pow(A, B);
    printf("'o quadrado de A é igual a %.2f", B);
}