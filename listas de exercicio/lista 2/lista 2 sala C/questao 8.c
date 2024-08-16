#include <stdio.h>

int main(){
    int N1, N2, N3;
    printf("Digite o primeiro numero:");
    scanf("%d", &N1);
    printf("Digite o segundo numero:");
    scanf("%d", &N2);
    printf("Digite o terceiro numero:");
    scanf("%d", &N3);

    if (N1 % 2==0 && N1 % 3==0){
        printf("%d é divisivel por 2 e 3, ", N1);
    } if(N2 % 2==0 && N2 % 3==0){
         printf("%d é divisivel por 2 e 3, ", N2);
    } if(N3 % 2==0 && N3 % 3==0){
         printf("%d é divisivel por 2 e 3.", N3);
    }
}