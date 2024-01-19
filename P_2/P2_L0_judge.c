#include <stdio.h>
char stack[20];
int top = 0;
int main() {
    int n;
    int ans = 1;
    char c;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%c", &c);
        if (i < n / 2) {  // 0 1 2 3 4
            stack[top++] = c;
        } else {
            if (!(i == n / 2 && n & 1 == 1))
                if (stack[--top] != c) {
                    ans = 0;
                }
        }
    }
    printf("%d", ans);
    return 0;
}