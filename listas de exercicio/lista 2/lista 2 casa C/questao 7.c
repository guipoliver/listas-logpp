#include <stdio.h>

int main(){
    int N;
    printf("Digite um valor entre 1 a 5 para saber seu respectivo curso:");
    scanf("%d", &N);

    switch (N)
    {
    case 1:
        printf("Engenharia");
        break;
    case 2:
        printf("Edificações");
        break;
    case 3:
        printf("Sistemas Elétricos");
        break;
    case 4:
        printf("Turismo");
        break;
    case 5:
        printf("Análise de Sistemas ");
        break;
    
    default:
    printf("Codigo invalido, insira um valor entre 1 e 5");
        break;
    }
}