#include <stdio.h>
#include <time.h>

int main() {
    int data [] = {9, 8, 10, 6, 7};
    int n = sizeof(data) / sizeof(data[0]);
    int i, j, min, temp;

    printf("Sebelum diururtkan: ");
    for (i = 0; i < n; i++){
        printf("%d ", data[i]);
    }

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

    printf("Sesudah diurutkan: ");
    for (i = 0; i < n; i++) {
        printf("%d ", data[i]);
    }
    
    return 0;
}