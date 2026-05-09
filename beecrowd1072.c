#include <stdio.h>

int main() {
    int num, x, in ,out;
    scanf(" %d", &num);
    
    in = 0;
    out = 0;
    
    while (num > 0) {
        scanf(" %d", &x);
        if (x > 20 || x < 10) {
            out++;
        } else {
            in++;
        }
        num--;
    }
    
    printf("%d in\n", in);
    printf("%d out\n", out);

    return 0;
}
