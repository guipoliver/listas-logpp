#include <stdio.h>

int main(){
    int A;
    printf("Digite o primeiro valor:");
    scanf("%d", &A);

    if (A > 0){
        printf("%d ja é um numero positivo.", A);
    } else {
       A = A * -1;
        printf("o modulo do numero é %d", A);
    }
}