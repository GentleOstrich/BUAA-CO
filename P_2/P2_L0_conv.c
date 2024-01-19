#include <stdio.h>
int f[10][10];
int h[10][10];
int g[10][10];
int main() {
    int m1, n1, m2, n2;
    scanf("%d%d%d%d", &m1, &n1, &m2, &n2);
    for (int i = 0; i < m1; ++i) {
        for (int j = 0; j < n1; ++j) {
            scanf("%d", &f[i][j]);
        }
    }
    for (int i = 0; i < m2; ++i) {
        for (int j = 0; j < n2; ++j) {
            scanf("%d", &h[i][j]);
        }
    }
    int a = m1 - m2 + 1;
    int b = n1 - n2 + 1;
    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < b; ++j) {
            for (int k = 0; i + k < m1 && k < m2; ++k) {
                for (int l = 0; j + l < n1 && l < n2; ++l) {
                    g[i][j] += f[i + k][j + l] * h[k][l];
                }
            }
        }
    }
    for (int i = 0; i < a; ++i) {
        for (int j = 0; j < b; ++j) {
            printf("%d ", g[i][j]);
        }
        printf("\n");
    }
    return 0;
}