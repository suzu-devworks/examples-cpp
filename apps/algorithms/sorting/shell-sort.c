#include <stdio.h>

#define SWAP(a, b) (a ^= b, b = a ^ b, a ^= b)

void sort(int *data, int length) {
    int gap;
    int i, j;

    for (gap = 1; gap < length / 3; gap = 3 * gap + 1) {
    }

    while (gap > 0) {
        for (i = gap; i < length; i++) {
            for (j = i - gap; j >= 0; j = j - gap) {
                if (data[j] > data[j + gap]) {
                    SWAP(data[j], data[j + gap]);
                }
                else {
                    break;
                }
            }
        }
        gap = gap / 3;
    }
}

int main(void) {
    int num[] = { 25, 91, 14, 78, 5, 42, 63, 87, 30, 55 };
    int len = sizeof(num) / sizeof(num[0]);

    sort(num, len);

    for (int i = 0; i < len; i++) {
        printf("%d = %3d\n", i, num[i]);
    }
}
