#include <stdio.h>

int main(){
    int N1, N2;
    printf("Digite o primeiro numero:");
    scanf("%d", &N1);
    printf("Digite o segundo numero:");
    scanf("%d", &N2);

    if (N1 % 4==0 || N1 % 5==0){
        printf("%d é divisivel por 4 e 5, ", N1);
    } if(N2 % 4==0 || N2 % 5==0){
         printf("%d é divisivel por 4 e 5, ", N2);
    }
}