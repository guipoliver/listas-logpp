#include <stdio.h>

int main() {
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);
    if (numero % 2 == 0)
    {
        printf("Número digitado é par");
        } else {
            printf("Numero digitado é impar");
        }
            
    }

