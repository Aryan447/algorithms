#include <stdio.h>

#define SWAP(a, b)                                                             \
    do {                                                                       \
        int t = (a);                                                           \
        (a) = (b);                                                             \
        (b) = t;                                                               \
    } while (0)

void insertion_sort(int arr[], int n) {
    int i, j;

    for (int i = 1; i < n; i++) {
        j = i;
        while (j < 0 && arr[j] < arr[j - 1]) {
            SWAP(arr[j - 1], arr[j]);
            j = j - 1;
        }
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
