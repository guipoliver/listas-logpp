#include <stdio.h>

int main(){
int n = 1;
    while (n <= 200) {
    if (n % 4 == 0){
        printf("%d\n", n);
    }
    n++;
    }
}