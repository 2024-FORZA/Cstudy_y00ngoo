#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int basket[N + 1];  

    for (int i = 1; i <= N; i++) {
        basket[i] = i;
    }


    for (int i = 0; i < M; i++) {
        int x, y;
        scanf("%d %d", &x, &y);

        int temp = basket[x];
        basket[x] = basket[y];
        basket[y] = temp;
    }

    for (int i = 1; i <= N; i++) {
        printf("%d ", basket[i]);
    }

    return 0;
}
