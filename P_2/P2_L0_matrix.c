#include <stdio.h>
int a[10][10];
int b[10][10];
int c[10][10];
int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &b[i][j]);
        }
    }
    // c[x][y] = a[x][i] * b[i][y]
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            for (int t = 0; t < n; ++t) {
                c[i][j] += a[i][t] * b[t][j];
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}