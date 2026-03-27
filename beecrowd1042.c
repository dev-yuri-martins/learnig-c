#include <stdio.h>

int main() {
    int a, b, c, x, A, B, C;
    scanf(" %d %d %d", &a, &b, &c);
    
    A = a; B = b; C = c;
    
    if (a < b) {
        x = b; b = a; a = x;
    }
    if (a < c) {
        x = c; c = a; a = x;
    }
    if (b < c) {
        x = c; c = b; b = x;
    }
    
    printf("%d\n%d\n%d\n\n", c, b, a); //Ordem crescente;
    printf("%d\n%d\n%d\n", A, B, C); //Ordem da entrada;
    
    return 0;
}
