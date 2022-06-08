#include <stdio.h>



int isPrime(int number)
{
    int TRUE = 1;
    int FALSE = 0;

    if (number == 1) {
        return FALSE;
    }
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return FALSE;
        }
    }
    return TRUE;
}

int input()
{
    int number = 0;
    printf("正の整数を入力してください: ");
    scanf("%d", &number);
    return number;
}

int main(void)
{
    for (int number = input(); number > 0; number = input()) {
        printf("%d", number);
        puts(isPrime(number) ? "は素数です" : "は素数ではありません");
    }
}