#include <stdio.h>

int main(){
    int N;
    printf("Digite um numero inteiro entre 1 a 12 para saber seu respectivo mes:");
    scanf("%d", &N);

    switch (N)
    {
    case 1:
        printf("Janeiro");
        break;
    case 2:
        printf("Fevereiro");
        break;
    case 3:
        printf("Março");
        break;
    case 4:
        printf("Abril");
        break;
    case 5:
        printf("Maio");
        break;
    case 6:
        printf("Junho");
        break;
    case 7:
        printf("Julho");
        break;
    case 8:
        printf("Agosto");
        break;
    case 9:
        printf("Setembro");
        break;
    case 10:
        printf("Outubro");
        break;
    case 11:
        printf("Novembro");
        break;
    case 12:
        printf("Dezembro");
        break;
    
    default:
        printf("O valor digitado nao foi entre 1 e 12");
        break;
    }
}