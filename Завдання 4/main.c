#include <stdio.h>
#include<locale.h>

int main() {
    setlocale (LC_CTYPE,"ua");
    int num;

    printf("Введіть ціле число: ");

    scanf("%d", &num);

    (num % 2 == 0) ? printf("%d це парне число", num) : printf("%d це не парне число", num);

    return 0;
}
