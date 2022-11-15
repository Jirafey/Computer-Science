#include <stdio.h>

int main(int argc, char** argv) {
    typedef unsigned char                uint8_t;
typedef unsigned short int        uint16_t;
#ifndef __uint32_t_defined
typedef unsigned int                uint32_t;
# define __uint32_t_defined
#endif
    double num1 = 0.1223523554234342523;
    double multi = 5.12411 * 0.32 * num1;
    printf("%.18lf", multi);
    return 0;
}