#include <stdio.h>

int main() {
    int triggerCount = 0;
    int sensorTriggers = 5;
    for(int i = 0; i<sensorTriggers;i++){
        triggerCount++;
    }

    scanf("%d\n",triggerCount);
    printf("Total triggers = %d\n",triggerCount);
    return 0;
}