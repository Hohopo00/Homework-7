#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "RUS");
    int k;
    scanf("%d", &k);

    char* forms[] = { "������", "������", "������" };

    // ���������� ��������� ��������� ������ if-else
    int index = (k % 10 == 1 && k % 100 != 11) ? 1 :
        ((k % 10 >= 2 && k % 10 <= 4 && (k % 100 < 10 || k % 100 >= 20)) ? 2 : 0);

    printf("� ��������� ������� %d %s\n", k, forms[index]);

    return 0;
}