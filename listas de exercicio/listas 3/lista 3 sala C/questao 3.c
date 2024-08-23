#include <stdio.h>

int main(){
int x = 0;
int r = 0;
    printf("Digite um numero inteiro qualquer para saber sua tabuada:");
    scanf("%d", &n);
    while x <= 10{
        r = n * x;
        printf("%d X %d = %d", n, x, r);
        x++;
    }
}