#include <stdio.h>

int main(){
    int numero_c=20;
    int N;
    int R;
    printf("Digite um numero entre 0 e 100 para ver o quao distante ele esta do numero chave:");
    scanf("%d", &N);
    R = N - numero_c;
    if (N < numero_c){
        printf("o numero digitado é menor que o numero chave");
    } else{
        printf("o numero digitado esta %d de distancia do numero chave", R);
    }
}