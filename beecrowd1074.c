#include <stdio.h>

void eh_par (int x) {
    if (x == 0) {
        printf("NULL\n");
    } else if (x % 2 == 0){
        printf("EVEN ");
    } else {
        printf("ODD ");
    } 
}

void eh_positivo (int y) {
    if (y > 0) {
        printf("POSITIVE\n");
    } else {
        printf("NEGATIVE\n");
    }
}

int main() {
    int lista, num;
    scanf(" %d", &lista);
    
    for (int i = 0; i < lista; i ++) {
        scanf("%d", &num);
        eh_par(num);
        if (num != 0) {
            eh_positivo(num);
        }
    }
    return 0;
}
//ficou bem bonitinho :)
