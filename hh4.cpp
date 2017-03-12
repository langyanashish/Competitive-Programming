#include <stdio.h>
    void main()
    {
        char *x = "hack";
        char *y = *(&x);
        printf("%p\t%p", x, y);
    }
