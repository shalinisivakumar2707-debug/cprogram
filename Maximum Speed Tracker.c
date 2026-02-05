#include <stdio.h>
int main() {
    int speed, max;
    scanf("%d", &max);
    for (int i = 1; i < 4; i++) {
        scanf("%d", &speed);
        if (speed > max) {
            max = speed;
        }
    }

    printf("Maximum speed = %d", max);

    return 0;
}

