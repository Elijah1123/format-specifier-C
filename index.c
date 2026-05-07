#include <stdio.h>

int main(){

    // Formaat specific = Special tokens that begins a symbol,
    //                    followed by a character that specifies the data type
    //                    and optional modifiers (width, precision, flags).
    //                    they control how data is displayed or interpretated.

    int age = 25;
    float price = 99.99;
    double pie = 3.1457624;
    char currency = '$';
    char name[] = "Eliajh Mzalendo";

    int num1 = 1;
    int num2 = 10;
    int num3 = 100;

    printf("%+d\n", num1);
    printf("%+d\n", num2);
    printf("%+d\n", num3);


    printf("%d\n", age);
    printf("%f\n", price);
    printf("%lf\n", pie);
    printf("%c\n", currency);
    printf("%s", name); 


    return 0;
}