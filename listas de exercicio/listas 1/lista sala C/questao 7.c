#include <stdio.h>

int main(){
    float NR_coelhos, A, B, C;

    printf("Digite um valor para NR_coelhos:");
    scanf("%f", &NR_coelhos);

    A = 18;
    B = 10;
    C = (NR_coelhos * 0,70) / A + B;

    printf("o custo de criacao dos coelhos é igual a %f", C);
}