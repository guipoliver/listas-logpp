#include <stdio.h>
#include <math.h>

int main(){
    float AP, LP, TP, TA, AA, LA, QP;

    printf("digite a altura da parede:");
    scanf("%f", &AP);
    printf("digite a largura da parede:");
    scanf("%f", &LP);
    printf("digite a altura do azulejo:");
    scanf("%f", &AA);
    printf("digite a largura do azulejo:");
    scanf("%f", &LA);

    TP = AP * LP;
    TA = AA * LA;
    QP = TP / TA;
    printf("serao necessarios:%.0f azulejos", QP);
}