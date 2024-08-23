#include <stdio.h>

int main(){
    int A, B, C;
    printf("Digite o primeiro valor:");
    scanf("%d", &A);
    printf("Digite o segundo valor:");
    scanf("%d", &B);
    printf("Digite o terceiro valor:");
    scanf("%d", &C);

    if (A>B && B>C){
        printf("A ordem crescente é:%d, %d, %d", C, B, A);
    } else if (B>A && A>C){
        printf("A ordem crescente é:%d, %d, %d", C, A, B);
    } else if (C>B && B>A){
        printf("A ordem crescente é:%d, %d, %d", A, B, C);
    } else if (A>C && C>B){
        printf("A ordem crescente é:%d, %d, %d", B, C, A);
    } else if (B>C && C>A){
        printf("A ordem crescente é:%d, %d, %d", A, C, B);
    } else if (C>A && A>B){
        printf("A ordem crescente é:%d, %d, %d", B, A, C);
    }
}