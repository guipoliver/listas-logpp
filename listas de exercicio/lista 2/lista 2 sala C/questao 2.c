#include <stdio.h>

int main(){
    float N1, N2, M, NE, MN;
    printf("Digite sua primeira nota:");
    scanf("%f", &N1);
    printf("Digite sua segunda nota:");
    scanf("%f", &N2);
    M = (N1 + N2)/ 2;
    if (M >= 6)
    {
          printf("Parabens voce foi aprovado sua media foi de %.2f", M);
    } else{
        printf("Nao atingiu nota esperada, insira nota do exame:");
        scanf("%f", &NE);
        MN = (M + NE) / 2;
    }if (MN >=5){
        printf("Parabens voce foi aprovado sua media foi de %.2f", MN);
    } else{
         printf("Nao atingiu nota esperada");
    }
}