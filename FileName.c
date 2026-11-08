#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, ".UTF8");
    int n;
    double p = 1.0;

    printf("Введите n: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++) {
        p = p * (1.0 - 1.0 / (i * i));
    }
    printf("Контрольный пример при n = 3: 0.666667\n");
    printf("Результат программы: %f\n", p);
    return 0;
}