#include <stdio.h>

int main() {
    int x = 7;

    for(int i = 1; i <= 9; i += 2) {
        for(int j = x; j > (x - 3); j--) {
            printf("I=%d J=%d\n", i, j);
        }
        x += 2;
    }
    return 0;
} 
