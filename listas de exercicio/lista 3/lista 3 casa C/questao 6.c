#include <stdio.h>

int main(){
int a;
    for (a = 0; a <=20; a++) {
        if (a % 2 == 1){
            printf("%d é impar\n", a);
        } else {
            printf("%d é par\n", a);
        }
    }
}