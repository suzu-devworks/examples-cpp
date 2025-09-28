#include <stdio.h>

#define SWAP(a, b) (a ^= b, b = a ^ b, a ^= b)

void quick(int *data, int left, int right) {
    int pivot;
    int i, j;

    if (left >= right) {
        return;
    }

    pivot = data[(left + right) / 2];
    i = left - 1;
    j = right + 1;
    while (1) {
        while (data[++i] < pivot) {}
        while (data[--j] > pivot) {}
        if (i >= j) {
            break;
        }

        SWAP(data[i], data[j]);
    }

    quick(data, left, i - 1);
    quick(data, j + 1, right);
}

void sort(int *data, int length) {
    quick(data, 0, length - 1);
}

int main(void) {
    int num[] = { 25, 91, 14, 78, 5, 42, 63, 87, 30, 55 };
    int len = sizeof(num) / sizeof(num[0]);

    sort(num, len);

    for (int i = 0; i < len; i++) {
        printf("%d = %3d\n", i, num[i]);
    }
}
