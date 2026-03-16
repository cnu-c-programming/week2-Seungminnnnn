#include <stdio.h>
#include <math.h>

int check_prime(int n) {
    if (n < 2) return 0;
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;
    
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n;
    
    scanf("%d", &n);

    if (check_prime(n)) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
