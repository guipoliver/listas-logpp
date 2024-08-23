#include <stdio.h>
#include <math.h>

int main() {
    float nota, fracao;
    int arredondado;
    printf("Digite a sua nota para arredondar: ");
    scanf("%f", &nota);
    fracao = nota - floor(nota);
    if (fracao >= 0.5) {
        arredondado = ceil(nota);
    } else {
        arredondado = floor(nota);
    }
    printf("%d", arredondado);
}
