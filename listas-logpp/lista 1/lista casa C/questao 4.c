#include <stdio.h>
#include <math.h>

int main(){
    float a, b, P, A;

    printf("digite o tamanho do lado a do retangulo:");
    scanf("%f", &a);
    printf("digite o tamanho do lado b do retangulo:");
    scanf("%f", &b);

    A = a * b;
    P = 2 * a + 2* b;
    printf("a area do retangulo é %.2f e o perimetro do retangulo é igual a: %.2f", A, P);
}