#include <stdio.h>

#define SWAP(a, b)                                                             \
    do {                                                                       \
        int t = (a);                                                           \
        (a) = (b);                                                             \
        (b) = t;                                                               \
    } while (0)

void selection_sort(int A[], int n) {
    int min;

    for (int i = 0; i < n; i++) {
        min = i;
        for (int j = i + 1; j < n; j++) {
            if (A[j] < A[min]) {
                min = j;
            }
            SWAP(A[i], A[min]);
        }
    }
}

int main() {
    int A[11] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

    selection_sort(A, 11);

    for (int i = 0; i < 11; i++) {
        printf("%d ", A[i]);
    }

    printf("\n");
    return 0;
}

