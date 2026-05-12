#include <stdio.h>

int main() {
    int x, numero, sapo, rato, coelho, total;
    char letra;
    
    sapo = 0; 
    coelho = 0;
    rato = 0;
    scanf(" %d", &x);
    
    for (int i = 0; i < x; i++) {
        scanf("%d %c", &numero, &letra);
        
        if (letra == 67) {
            coelho += numero;
        } else if (letra == 82) {
            rato += numero;
        } else if (letra == 83) {
            sapo += numero; 
        }
    }
    total = coelho + sapo + rato;
    
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", coelho);
    printf("Total de ratos: %d\n", rato);
    printf("Total de sapos: %d\n", sapo);
    printf("Percentual de coelhos: %.2lf %%\n", (100.00 * coelho) / total);
    printf("Percentual de ratos: %.2lf %%\n", (100.00 * rato) / total);
    printf("Percentual de sapos: %.2lf %%\n", (100.00 * sapo) / total);
    
    return 0;
}
