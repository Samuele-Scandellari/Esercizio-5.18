#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int array[10];
    srand(time(NULL));
    for (int i = 0; i < 10; i++) {
        array[i] = 1 + rand() % 100;
    }
    printf("Array dall'inizio alla fine:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    printf("Array dalla fine all'inizio:\n");
    for (int i = 9; i >= 0; i--) {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}
