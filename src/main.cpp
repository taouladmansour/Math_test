#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "../include/add.h"
#include "../include/sub.h"
#include "../include/mult.h"
#include "../include/div.h"

int main(){
    int a = 13;
    int b = 7;
    int c;
    float d;

    c = add(a,b);
    std::cout << a << " + " << b << " = " << c << std::endl;

    c = sub(a,b);
    std::cout << a << " - " << b << " = " << c << std::endl;

    c = mult(a,b);
    std::cout << a << " * " << b << " = " << c << std::endl;

    d = division(a,b);
    std::cout << a << " / " << b << " = " << d << std::endl;
}