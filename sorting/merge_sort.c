#include <stdio.h>
#include <stdlib.h>

void merge(int A[], int p, int q, int r) {
    int nL = q - p + 1;
    int nR = r - q;

    int *L = (int *)malloc(nL * sizeof(int));
    int *R = (int *)malloc(nR * sizeof(int));

    for (int i = 0; i < nL; i++) {
        L[i] = A[p + i];
    }

    for (int j = 0; j < nR; j++) {
        R[j] = A[q + j + 1];
    }

    int i = 0, j = 0, k = p;

    while (i < nL && j < nR) {
        if (L[i] <= R[j]) {
            A[k] = L[i];
            i++;
        } else {
            A[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < nL) {
        A[k] = L[i];
        i++;
        k++;
    }
    while (j < nR) {
        A[k] = R[j];
        j++;
        k++;
    }

    free(L);
    free(R);

    L = NULL;
    R = NULL;
}

void merge_sort(int A[], int p, int r) {
    if (p >= r) {
        return;
    }

    int q = (p + r) / 2;

    merge_sort(A, p, q);
    merge_sort(A, q + 1, r);

    merge(A, p, q, r);
}

int main() {
    int n = 10000;
    int counter = 10000;

    int A[10000];

    for (int i = 0; i < n; i++) {
        A[i] = counter;
        counter--;
    }

    merge_sort(A, 0, n - 1);

    for (int i = 0; i < n; i++)
        printf("%d ", A[i]);

    return 0;
}

