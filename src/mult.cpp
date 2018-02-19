#include "../include/mult.h"
#include "../include/add.h"

int mult( int a, int b){
    int c = 0;
    if (b<0)
        a*=-1;

    while ( b != 0){
        c = add(a,c);
        if(b>0)
            b--;
        else
            b++;
    }

    return c;
}