#include <stdio.h>

struct d {
    char str[1000];
    float a;
    int s;
};

int main() {
    struct d d1 = {"rahil", 23.424, 32};
    struct d d2 = {"dskfndsklfndlskfnlksdfnlksd", 233213.424, 332};

    printf("%s %f %d\n", d1.str, d1.a, d1.s);
    printf("%s %f %d\n", d2.str, d2.a, d2.s);

    return 0;
}
