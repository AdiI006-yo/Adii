#include <stdio.h>

int main() {
    int n = 2;
    if (n <= 1) printf("Not prime\n");
    else if (n == 2) printf("Prime\n");
    else {
        for (int i = 2; i < n; i++)
            if (n % i == 0) { printf("Not prime\n"); return 0; }
        printf("Prime\n");
    }
    return 0;
}