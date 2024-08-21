#include <stdio.h>
#include <stdbool.h>
int main(){
char comando;
int R, x, y;
while (true){
    printf("Digite um comando para a calculadora (+, -, *, /) ou (S, para sair):");
    /*espaço antes da % é para nao repetir a linha print!!!*/
    scanf(" %c", &comando);
    if (comando == '+'){
        printf("Digite o primeiro valor:");
        scanf("%d", &x);
        printf("Digite o segundo valor:");
        scanf("%d", &y);
        R = x + y;
        printf("o resultado é:%d\n", R);
    }
    if (comando == '-'){
        printf("Digite o primeiro valor:");
        scanf("%d", &x);
        printf("Digite o segundo valor:");
        scanf("%d", &y);
        R = x - y;
        printf("o resultado é:%d\n", R);
    }
    if (comando == '*'){
        printf("Digite o primeiro valor:");
        scanf("%d", &x);
        printf("Digite o segundo valor:");
        scanf("%d", &y);
        R = x * y;
        printf("o resultado é:%d\n", R);
    }
    if (comando == '/'){
        printf("Digite o primeiro valor:");
        scanf("%d", &x);
        printf("Digite o segundo valor:");
        scanf("%d", &y);
        R = x / y;
        printf("o resultado é:%d\n", R);
    }
    if (comando == 'S'){
        printf("Calculadora encerrada.");
        break;
    }
  }
}