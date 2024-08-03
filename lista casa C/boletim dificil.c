#include <stdio.h>
#include <math.h>

int main(){
    float P1, P2, ATIV, M;

        printf("Digite a nota da prova1:");
        scanf("%f", &P1);
        printf("Digite a nota da prova2:");
        scanf("%f", &P2);
        printf("Digite a nota da atividade:");
        scanf("%f", &ATIV);

        M = (P1 * 4 + P2 * 4 + ATIV * 2)/10;
        printf("a media obtida foi de %.2f", M);
        return 0;
}