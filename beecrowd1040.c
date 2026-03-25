#include <stdio.h> 

int main() {
    double a, b, c, d, e, average;
    scanf(" %lf %lf %lf %lf", &a, &b, &c, &d);

    average = ((a * 2) + (b * 3) + (c * 4) + d) / 10;
    
    if (average >= 7.0) {
        printf("Media: %.1lf\nAluno aprovado.\n", average);
        return 0;
    } else if (average < 5.0){
        printf("Media: %.1lf\nAluno reprovado.\n", average);
        return 0;
    } else {
        printf("Media: %.1lf\nAluno em exame.\n", average);
        
        scanf(" %lf", &e);
        printf("Nota do exame: %.1lf\n", e);
        average = (average + e) / 2;
        
        if (average >= 5.0) {
            printf("Aluno aprovado.\nMedia final: %.1lf\n", average);
            return 0;
        } else {
            printf("Aluno reprovado.\nMedia final: %.1lf\n", average);
        }
    }
    return 0;
}