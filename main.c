#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {

//1. Funciones comunes
//a)
    int num = -10;

    int abs_num = abs(num);

    printf("El valor absoluto de %d es %d\n", num, abs_num);

//b)
    srand(time(0));

    int random_number = rand();
    printf("Número aleatorio: %d\n", random_number);


    return 0;
}
