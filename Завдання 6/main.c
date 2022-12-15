#include <stdio.h>
#include<locale.h>
#include <math.h>

int main() {
    setlocale (LC_CTYPE,"ua");
    double b;
    int x,y,z;

    printf("Введіть задані числа: ");

    scanf("%d %d %d", &x,&y,&z);

    b = ( 1 - cos(y-2) ) / ( (pow(x,4) / 2 ) + ( ( 1 - cos(2 * z) ) ) / 2 );

    printf("Результат обчислення %f", b);

    return 0;
}
