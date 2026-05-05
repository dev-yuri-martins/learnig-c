#include <stdio.h>

int main() {
    int dayi, dayf;
    int hi, mi, si, hf, mf, sf;
    char trash[4];

    scanf("%s %d", trash, &dayi);
    scanf("%d : %d : %d", &hi, &mi, &si);
    scanf("%s %d", trash, &dayf);
    scanf("%d : %d : %d", &hf, &mf, &sf);

    int ds = sf - si;
    int dm = mf - mi;
    int dh = hf - hi;
    int dd = dayf - dayi;

    if (ds < 0) { ds += 60; dm--; }
    if (dm < 0) { dm += 60; dh--; }
    if (dh < 0) { dh += 24; dd--; }

    printf("%d dia(s)\n", dd);
    printf("%d hora(s)\n", dh);
    printf("%d minuto(s)\n", dm);
    printf("%d segundo(s)\n", ds);

    return 0;
}

//Esse código é completamente IA, não consegui fazer nem entender o que eu fiz de errado, mesmo já tendo feito muitos exercícios parecidos com sucesso. Vou voltar nesse exercício ainda, só quero entregar ele, mas por agora já perdi muitas horas nele. 
