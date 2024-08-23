#include <stdio.h>
#include <math.h>

int main(){
    int N1, N2, N3, delta, x1, x2;
    printf("Digite o primeiro numero:");
    scanf("%d", &N1);
    printf("Digite o segundo numero:");
    scanf("%d", &N2);
    printf("Digite o terceiro numero:");
    scanf("%d", &N3);

    if(N1 < 0 || N1> 0){
         delta = (pow(N2, 2))-(4*N1*N3);
         if (delta < 0){
            printf("a equacao nao tem solucao");
         } else if (delta == 0){
            x1 = -N2/(2*N1);
            x2 = x1;
            printf("A equação tem duas raízes reais e iguais %d %d", x1, x2);
         } else {
            x1 = (-N2+pow(delta, 0.5))/(2*N1);
            x2 = (-N2-pow(delta, 0.5))/(2*N1);
            printf("A equação tem duas raízes reais e diferentes %d %d", x1, x2);
         }
    }else {
        printf("nao é uma equacao de segundo grau");
    }
}