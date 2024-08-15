#include <stdio.h>
#include <math.h>

int main(){
    float A, B;

    printf("Digite um valor para A:");
    scanf("%f", &A);
    printf("Digite um valor para B:");
    scanf("%f", &B);

     B = A - A;
     B = A - B;
     A = A + B;

     printf("o valor A é igual a %.2f e o valor B é igual a %.2f", A, B);
}