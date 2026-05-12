#include <stdio.h>

double media(double a, double b, double c) {
    a *= 2; 
    b *= 3;
    c *= 5;
    return (a + b + c) / 10;
} 

int main() {
    int num;
    double x, y, z;
    scanf(" %d", &num);
    
    for (int i = 1; i <= num; i ++) {
        scanf(" %lf %lf %lf", &x, &y, &z);
        printf("%.1lf\n", media(x, y, z));
    }
    return 0;
}
