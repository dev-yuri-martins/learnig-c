#include <stdio.h>

int main() {
    double t;
    scanf(" %lf", &t);

    int total = (int)(t * 100 + 0.5);

    int n100 = total / 10000; total %= 10000;
    int n50  = total / 5000;  total %= 5000;
    int n20  = total / 2000;  total %= 2000;
    int n10  = total / 1000;  total %= 1000;
    int n5   = total / 500;   total %= 500;
    int n2   = total / 200;   total %= 200;
    int m1   = total / 100;   total %= 100;
    int m50  = total / 50;    total %= 50;
    int m25  = total / 25;    total %= 25;
    int m10  = total / 10;    total %= 10;
    int m05  = total / 5;     total %= 5;
    int m01  = total;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", n100);
    printf("%d nota(s) de R$ 50.00\n",  n50);
    printf("%d nota(s) de R$ 20.00\n",  n20);
    printf("%d nota(s) de R$ 10.00\n",  n10);
    printf("%d nota(s) de R$ 5.00\n",   n5);
    printf("%d nota(s) de R$ 2.00\n",   n2);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",  m1);
    printf("%d moeda(s) de R$ 0.50\n",  m50);
    printf("%d moeda(s) de R$ 0.25\n",  m25);
    printf("%d moeda(s) de R$ 0.10\n",  m10);
    printf("%d moeda(s) de R$ 0.05\n",  m05);
    printf("%d moeda(s) de R$ 0.01\n",  m01);

    return 0;
}