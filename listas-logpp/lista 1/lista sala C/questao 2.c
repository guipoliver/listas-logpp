#include <stdio.h>

int main(){
    float F, C;

    printf("Digite uma temperatura em geaus fahrenheit:");
    scanf("%f", &F);
    C = (((F - 32)* 5)/ 9);
    printf("a temperatura em graus centigrados é de %.2f", C);
}