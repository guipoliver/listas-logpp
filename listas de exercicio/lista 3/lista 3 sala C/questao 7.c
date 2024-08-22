#include <stdio.h>
#include <math.h>
int main(){
int n = 0;
int x = 3;
int r;
    while (n <= 15) {
    r = pow(x, n);
    printf("%d elevado a %d = %d\n", x, n, r);
    n++;
    }
}