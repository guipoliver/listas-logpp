#include <stdio.h>

int main() {
    int a, b, c;
    int maior, menor, meio;

    printf("Digite o primeiro número: ");
    scanf("%d", &a);
    printf("Digite o segundo número: ");
    scanf("%d", &b);
    printf("Digite o terceiro número: ");
    scanf("%d", &c);

    if (a > b && a > c) {
        maior = a;
    } else if (b > a && b > c) {
        maior = b;
    } else {
        maior = c;
    }

    if (a < b && a < c) {
        menor = a;
    } else if (b < a && b < c) {
        menor = b;
    } else {
        menor = c;
    }

    if ((a > b && a < c) || (a < b && a > c)) {
        meio = a;
    } else if ((b > a && b < c) || (b < a && b > c)) {
        meio = b;
    } else {
        meio = c;
    }

    printf("Maior número: %d\n", maior);
    printf("Menor número: %d\n", menor);
    printf("Número do meio: %d\n", meio);
}