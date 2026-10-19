#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    double x, Q, Q0 = 50.00, dQ;
    setlocale(LC_ALL, "RUS");
    puts("”кажите содержание примеси (X, %):");
    scanf("%lf", &x);
    if (x < 0)
        Q = 6 * sqrt(x - 0 + 1) + 5;
    else if (x >= 0 && x <= 8)
        Q = 2 * (x - 4) + 50;
    else
        Q = 0.25 * pow(x - 8, 2) + 55;
    printf("\nQ = %.2lf", Q);

    dQ = fabs(Q - Q0);
    printf("\ndQ = %.2lf", dQ);
    if (dQ > 10) {
        printf("\n\n>>> —»√ЌјЋ»«ј÷»я! <<<");
        printf("\nќшибка! «начени€ вышли за критические пределы.");
        printf("\n—осто€ние: јварийный режим (отклонение)");
    }
    else {
        printf("\n\n—осто€ние: Ўтатный режим (в пределах нормы)");
    }
    return 0;
}