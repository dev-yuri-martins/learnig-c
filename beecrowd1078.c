#include <stdio.h> 

int main() {
    int x;
    int i = 1;
    scanf(" %d", &x);
    
    while (i <= 10) {
        printf("%d x %d = %d\n", i, x, i * x);
        i ++;
    }
    return 0;
}
