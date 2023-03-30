#include <stdio.h>
#include <stdlib.h>

int main() {
    int* arr = (int*) malloc(4 * sizeof(int));
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    printf("Stored integers are\n");
    for (int i = 0; i < 4; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);
    return 0;
}
