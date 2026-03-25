#include <stdio.h>

void insertion_sort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
int main() {
    int arr[10000];
    int counter = 10000;
    for (int i = 0; i < 10000; i++) {
        arr[i] = counter;
        counter--;
    }
    insertion_sort(arr, 10000);
    for (int i = 0; i < 10000; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
