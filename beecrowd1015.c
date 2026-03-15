#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2, part1, part2;
    scanf(" %lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    
    part1 = pow(x2 - x1, 2);
    part2 = pow(y2 - y1, 2);
    printf("%.4lf\n",sqrt(part1 + part2));
    
    return 0;
}
