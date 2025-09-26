#include <stdio.h>

#define SWAP(a, b) (a ^= b, b = a ^ b, a ^= b)

void sort(int *data, int length) {
    int left = 0;
    int right = length - 1;

    while (left < right) {
        int last_swap;

        for (int i = left; i < right; i++) {
            if (data[i] > data[i + 1]) {
                SWAP(data[i], data[i + 1]);
                last_swap = i;
            }
        }
        right = last_swap;

        for (int i = right; left < i; i--) {
            if (data[i - 1] > data[i]) {
                SWAP(data[i - 1], data[i]);
                last_swap = i;
            }
        }
        left = last_swap;
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
