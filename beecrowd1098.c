#include <stdio.h>

int main() {
    double a, b, c;
    a = 1.0; b = 2.0; c = 3.0;
    
    for(double i = 0.0; i < 2; i += 0.2){
        printf("I=%g J=%g\n", i, a);
        printf("I=%g J=%g\n", i, b);
        printf("I=%g J=%g\n", i, c);
        a += 0.2;
        b += 0.2;
        c += 0.2;
    }
    return 0;
}
