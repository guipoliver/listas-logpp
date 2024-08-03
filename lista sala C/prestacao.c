#include <stdio.h>

int main(){
    float V, T, Te, P;

    printf("Digite o valor da prestacao:");
    scanf("%f", &V);
    printf("Digite um valor para a taxa da prestacao:");
    scanf("%f", &T);
    printf("Digite um valor para o tempo da prestacao:");
    scanf("%f", &Te);

    P = V+(V*(T/100)*Te);
    printf("o valor da prestacao é igual a %.2f", P);
}