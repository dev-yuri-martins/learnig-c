#include <stdio.h>

int main() {
    int h, km;
    scanf(" %d %d", &h, &km);
    printf(" %.3lf\n", (km * h / 12.0));
    
    return 0;
}
