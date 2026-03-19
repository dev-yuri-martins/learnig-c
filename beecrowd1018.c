#include <stdio.h> 

int main() {
    int totalOriginal, total, n100, n50, n20, n10, n5, n2, n1;
    scanf(" %d", &totalOriginal);
    total = totalOriginal;
    
    n100 = total / 100;
    total = total % 100;
    
    n50 = total / 50;
    total = total % 50;
    
    n20 = total / 20;
    total = total % 20;
    
    n10 = total / 10;
    total = total % 10;
    
    n5 = total / 5;
    total = total % 5;
    
    n2 = total / 2;
    total = total % 2;
    
    n1 = total / 1;
    
    printf("%d\n", totalOriginal);
    printf("%d nota(s) de R$ 100,00\n", n100);
    printf("%d nota(s) de R$ 50,00\n", n50);
    printf("%d nota(s) de R$ 20,00\n", n20);
    printf("%d nota(s) de R$ 10,00\n", n10);
    printf("%d nota(s) de R$ 5,00\n", n5);
    printf("%d nota(s) de R$ 2,00\n", n2);
    printf("%d nota(s) de R$ 1,00\n", n1);
    return 0;
}
