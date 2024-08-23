#include <stdio.h>
#include <math.h>
int main(){
int n;
int m;
int r;
    printf("Digite o valor de uma base de potenia:");
    scanf("%d", &n);
    printf("Digite o valor de um expoente de potenia:");
    scanf("%d", &m);
    r = pow(n, m);
    printf("%d elevado a %d é igual a %d", n, m, r);
}