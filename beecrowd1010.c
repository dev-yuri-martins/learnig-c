#include <stdio.h> 

int main(){
    int c1, qt1, c2, qt2;
    float v1, v2;
    
    scanf(" %d %d %f %d %d %f", &c1, &qt1, &v1, &c2, &qt2, &v2);
    printf("VALOR A PAGAR: R$ %.2f\n", (v1 * qt1) + (v2 * qt2));
    
    return 0;
}
