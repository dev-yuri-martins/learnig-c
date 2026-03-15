#include <stdio.h> 

int main() {
    double s, b;
    char nome[100];
    
    scanf(" %s", nome);
    scanf(" %lf %lf", &s, &b);
    
    b = (b * 15) / 100;
    s += b;
    printf("TOTAL = R$ %.2lf\n", s);
    
    return 0;
}
