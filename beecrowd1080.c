#include <stdio.h>

int main() {
    int counter, maior, num;
    maior = 0;
    counter = 0;
    for(int i = 1; i <= 100; i++) {
        scanf(" %d", &num);
            if (num > maior) {
                maior = num;
                counter = i; 
            }
    }
    printf("%d\n%d\n", maior, counter);
    return 0;
}
