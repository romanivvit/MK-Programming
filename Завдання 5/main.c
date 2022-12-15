#include <stdio.h>
#include<locale.h>
#include <math.h>

double calculation(double x, double y){
    double firstCondition  = (x + y) / ( pow(x,2) + (x * y) + pow(y,2) );
    double secondCondition  = x / ( 1 + pow(y,2) );
    double thirdCondition  = y / ( 1 + pow(x,2) );

    return firstCondition + secondCondition + thirdCondition;
}
int main() {
    setlocale (LC_CTYPE,"ua");
    double result;
    double u,v;

    printf("Введіть дійсні числа: ");

    scanf("%lf %lf", &u, &v);

    result = calculation(u, v) + calculation(pow(u,2), pow(v,2));

    printf("Результат обчислення: %lf",result);

    return 0;
}
