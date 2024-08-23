#include <stdio.h>

int main(){
    float N1, N2, N3, M;
    printf("Digite sua primeira nota:");
    scanf("%f", &N1);
    printf("Digite sua segunda nota:");
    scanf("%f", &N2);
    printf("Digite sua terceira nota:");
    scanf("%f", &N3);
    M = (N1 + N2 + N3) / 3;
    if (M >= 6)
    {
        printf("Parabens voce foi aprovado sua media foi de %.2f", M);
    } else{
        printf("Infelizmente voce nao foi aprovado sua media foi de %.2f", M);
    }
    
}