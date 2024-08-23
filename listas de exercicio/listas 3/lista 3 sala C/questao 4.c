#include <stdio.h>

int main(){
int n;
    printf("Digite um numero inteiro menor que 50 para saber quantas vezes pode se multiplicar por 3 sem atingir 250:");
    scanf("%d", &n);
    while (n <= 250) {
    printf("%d", n);
    n *= 3;
    }
}