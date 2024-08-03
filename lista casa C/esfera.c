#include <stdio.h>
#include <math.h>

int main(){
    float R, V, A;

    printf("Digite o valor do raio da esfera:");
    scanf("%f", &R);

    V = 4 * 3,14 * pow (R, 3) / 3;
    A = 4 * 3,14 * pow (R, 2);
    printf("o volume da esfera é igual a %.2f e o valor da area é de %.2f", V, A);
}