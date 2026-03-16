#include <stdio.h>

int main() {
    int val1 = 100;
    printf("int : %d\n", val1);
    printf("hex : %x\n", val1);
    printf("oct : %o\n", val1);

    char val2 = 'c';
    printf("char : %c\n", val2);

    char* var3 = "hello world!";
    printf("string : %s\n", var3);

    float val4 = 3.141592;
    printf("float : %f\n", val4);
    printf("exp : %e\n", val4);
}
