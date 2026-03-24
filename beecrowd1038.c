#include <stdio.h>

int main() {
    int  snack, x;
    double r;
    scanf(" %d %d", &snack, &x);
    
    switch (snack) {
        case 1:
            r = 4.00 * x;
            break;
        case 2:
            r = 4.50 * x;
            break;
        case 3:
            r = 5.00 * x;
            break;
        case 4:
            r = 2.00 * x;
            break;
        case 5: 
            r = 1.50 * x;
            break;
    }
    printf("Total: R$ %.02lf\n", r);
    return 0;
}
