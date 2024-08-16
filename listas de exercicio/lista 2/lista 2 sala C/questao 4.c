#include <stdio.h>

int main(){
    int A, B, C;
    printf("Digite o primeiro lado de um triangulo:");
    scanf("%d", &A);
    printf("Digite o segundo lado de um triangulo:");
    scanf("%d", &B);
    printf("Digite o terceiro lado de um triangulo:");
    scanf("%d", &C);

    if (A<(B+C) && B<(A+C) && C<(A+B)){
        if (A==B && B==C){
            printf("É um triangulo equilatero");
        }
        else if (A==C || B==C || A==B){
            printf("É um triangulo isósceles");
       }
        else {
            printf("É um triangulo escaleno");
        }
    } else{
        printf("Os valores dados nao formam um triangulo");
    }
}