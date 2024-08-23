#include <stdio.h>

int main(){
    float R, A, VO;

    printf("Digite o raio da lata:");
    scanf("%f", &R);
    printf("Digite a altura da lata:");
    scanf("%f", &A);

    VO = A * 3,14159 * R * R;
    printf("O volume da lata é igual a:%.2f", VO);
}