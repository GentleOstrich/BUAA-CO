#include <stdio.h>
int a[10][10];
int flag[10][10];
int dfs(int x1, int y1, int x2, int y2) {
    int count = 0;
    if (x1 == x2 && (y1 + 1 == y2 || y1 - 1 == y2) ||
        y1 == y2 && (x1 + 1 == x2 || x1 - 1 == x2)) {
        count += 1;
    } else {
        if (a[x1 + 1][y1] == 0 && flag[x1 + 1][y1] == 0) {
            flag[x1][y1] = 1;
            count += dfs(x1 + 1, y1, x2, y2);
            flag[x1][y1] = 0;
        }
        if (a[x1 - 1][y1] == 0 && flag[x1 - 1][y1] == 0) {
            flag[x1][y1] = 1;
            count += dfs(x1 - 1, y1, x2, y2);
            flag[x1][y1] = 0;
        }
        if (a[x1][y1 + 1] == 0 && flag[x1][y1 + 1] == 0) {
            flag[x1][y1] = 1;
            count += dfs(x1, y1 + 1, x2, y2);
            flag[x1][y1] = 0;
        }
        if (a[x1][y1 - 1] == 0 && flag[x1][y1 - 1] == 0) {
            flag[x1][y1] = 1;
            count += dfs(x1, y1 - 1, x2, y2);
            flag[x1][y1] = 0;
        }
    }
    return count;
}
int main() {
    int n, m, x1, y1, x2, y2;
    scanf("%d%d", &n, &m);
    for (int i = 0; i < m + 2; ++i) {
        a[n + 1][i] = 1;
        a[0][i] = 1;
    }
    for (int i = 0; i < n + 2; ++i) {
        a[i][m + 1] = 1;
        a[i][0] = 1;
    }
    for (int i = 1; i < n + 1; ++i) {
        for (int j = 1; j < m + 1; ++j) {
            scanf("%d", &a[i][j]);
        }
    }
    scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
    printf("%d", dfs(x1, y1, x2, y2));
    return 0;
}