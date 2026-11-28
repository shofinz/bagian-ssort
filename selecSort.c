#include <stdio.h>
#include <time.h>

int main() {
    int data [] = {9, 8, 10, 6, 7};
    int n = 5;
    int i, j, min, temp;

    for (i = 0; i < n - 1; i++) {
        min = i;

        for (j = i + 1; j < n; j++) {
            if (data[j] < data[min]) {
                min = j;
            }
            
        }
    temp = data[i];
    data[i] = data[min];
    data[min] = temp;
    }

    printf("Hasil Pengurutan: ");
    for (i = 0; i < n; i++) {
        printf("%d ", data[i]);
    }
    
    return 0;
}