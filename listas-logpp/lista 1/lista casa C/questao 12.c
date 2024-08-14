#include <stdio.h>
#include <math.h>

int main(){
    float T, D, V;

    printf("Digite o tempo gasto na viagem em horas:");
    scanf("%f", &T);
    printf("Digite a distancia percorrida durante a viagem em km:");
    scanf("%f", &D);

    V = D / T;
    printf("velocidade media durante a viagem km/h %.2f", V);
}