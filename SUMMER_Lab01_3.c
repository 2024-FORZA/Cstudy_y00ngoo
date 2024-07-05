#include <stdio.h>

void get_sign(int n) {
    long long num;
    __int128 total_sum = 0;

    for (int i = 0; i < n; i++) {
        scanf("%lld", &num);
        total_sum += (__int128)num;
    }

    if (total_sum > 0) {
        printf("+\n");
    }
    else if (total_sum < 0) {
        printf("-\n");
    }
    else {
        printf("0\n");
    }
}

int main() {
    int test_cases = 3;
    int n;

    for (int t = 0; t < test_cases; t++) {
        scanf("%d", &n);
        get_sign(n);
    }

    return 0;
}