#include <stdio.h>

int main() {
    int x, y, temp;
    int long long sum = 0;
    scanf(" %d %d", &x, &y);
    
    if (x < y) {
        temp = x; x = y; y = temp;
    }
    
    for (int i = y + 1; i < x; i++) {
        if (i % 2 != 0) {
            sum += i;
        }
    }
    printf("%lld\n", sum);
    return 0;
}
