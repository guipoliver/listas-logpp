#include <stdio.h>
#include <math.h>

int main(){
    float T, S;

    printf("Digite a quantidade de tempo:");
    scanf("%f", &T);

    S = 2 + 3 * T + 1/2 * 10 * pow (T, 2);
    printf("a quantidade de metros foi de %.2f", S);
}