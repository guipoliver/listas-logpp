#include <stdio.h>
#include <math.h>

int main(){
    float r, A, C;

    printf("Digite o raio de uma circunferencia:");
    scanf("%f", &r);

    A = 3,14 * pow (r, 2);
    C = 2 * 3,14 * r;

    printf("A area da circunferencia é igual a %.2f e o comprimento da circunferencia é igual a %.2f", A, C);
}