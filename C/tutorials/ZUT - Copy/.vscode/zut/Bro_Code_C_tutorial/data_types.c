#include <stdio.h>
// if you want to use booleans #include <stdbool.h>
#include <stdbool.h>

// shift 3 include space shift , stdio.h enter
// main enter:
int main(int argc, char const *argv[])
{
    float c = 3.141592653589793; //3.141592(741012573)
    double number_pi = 3.141592653589793;
    bool t = false; // %d
    bool f = true; // %d
    char f = 120;
    unsigned char g = 255; // 0 to 255
    printf("%c", f);
    printf("%d", g);


    printf("float %f\ndouble %lf\n", c, number_pi);
     printf("float %0.15f\ndouble %0.15f\n", c, number_pi);
     printf("True: %d, False %d", t,f);
    /* code */
    return 0;
}
