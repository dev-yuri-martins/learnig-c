#include <stdio.h>

int main() {
    int a, b, x;
    scanf(" %d %d", &a, &b);
    
    if (a < b) {
        x = b; b = a; a = x;
    }
    
    if (a % b == 0) {
        printf("Sao Multiplos\n");
    } else {
        printf("Nao sao Multiplos\n")
    }
    return 0;
}
