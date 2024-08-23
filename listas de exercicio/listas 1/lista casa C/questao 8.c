#include <stdio.h>
#include <math.h>

int main(){
    float N1, N2, N3, N4, NF;

     printf("Digite suas notas do primeiro bimestre:");
    scanf("%f", &N1);
     printf("Digite suas notas do segundo bimestre:");
    scanf("%f", &N2);
     printf("Digite suas notas do terceiro bimestre:");
    scanf("%f", &N3);
     printf("Digite suas notas do quarto bimestre:");
    scanf("%f", &N4);

    NF = (N1 + N2 + N3 + N4)/4;

    printf("a sua nota final foi de %.2f", NF);
}