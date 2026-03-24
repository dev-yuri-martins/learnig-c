#include <stdio.h>

int main() {
    double i;
    scanf(" %lf", &i);
    
    if (i >= 0.0 && i <= 25.0) {
        printf("Intervalo [0,25]\n");
        return 0;
    }
    
    if (i > 25.0 && i <= 50.0) {
        printf("Intervalo (25,50]\n");
        return 0;
    }
    
    if (i > 50.0 && i <= 75.0) {
        printf("Intervalo (50,75]\n");
        return 0;
    }
    //Nesse exato momento eu percebi que talvez seria melhor um switch case, mas vou continuar com o que comecei
    if (i > 75.0 && i  <= 100.0) {
        printf("Intervalo (75,100]\n");
        return 0;
    }
    
    if (i < 0.0 || i > 100.0) {
        printf("Fora de intervalo\n");
        return 0;
    }
    return 0;
}
