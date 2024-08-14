#include <stdio.h>
#include <math.h>

int main(){
    float kg, A, IMC;

    printf("Digite seu peso em quilos:");
    scanf("%f", &kg);
    printf("Digite sua altura em cm:");
    scanf("%f", &A);

    IMC = (kg / pow(A, 2)) * 10000;

    printf("seu IMC é igual a %.2f um IMC normal é perto de 18", IMC);
}