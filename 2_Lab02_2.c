#include <stdio.h>

int main() {
    int test;
    scanf("%d", &test);

    for (int i = 0; i < test; i++) {
        int N, M;
        scanf("%d %d", &N, &M);

        int U = M-(N-M);
        int T = N - M;

        printf("%d %d\n", U, T);
    }
    return 0;
}