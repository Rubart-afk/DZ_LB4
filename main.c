#include <stdio.h>
int A, B, C;
int main(void)
{

    printf("Введите веса грузов A, B, C (целые кг): ");
    if (scanf("%d %d %d", &A, &B, &C) != 3) {
        printf("Ошибка ввода. Введите три целых числа.\n");
        return 1;
    }

    if (A % 5 == 0 && B % 5 == 0 && C % 5 == 0) {
        printf("Погрузка разрешена.\n");
    } else {
        printf("Погрузка запрещена.\n");
    }

    return 0;
}
