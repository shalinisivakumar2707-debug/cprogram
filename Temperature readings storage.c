#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int readings[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &readings[i]);
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", readings[i]);
    }

    return 0;
}