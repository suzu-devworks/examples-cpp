#include <stdio.h>

#define SWAP(a, b) (a ^= b, b = a ^ b, a ^= b)

void sort(int *data, int length) {
    for (int i = 0; i < length - 1; i++) {
        for (int j = length - 1; j > i; j--) {
            if (data[j - 1] > data[j]) {
                SWAP(data[j - 1], data[j]);
            }
        }
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
