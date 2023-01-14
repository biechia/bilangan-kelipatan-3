//code untuk menampilkan bilangan kelipatan 3 bahasa c.

#include <stdio.h>
#include <stdlib.h>

void display_multiples_of_3(int mulai, int batas) {
    for (int i = mulai; i <= batas; i++) {
        for (int j = 1; j <= i; j++) {
            if (i % 3 == 0) {
                printf("%d\n", i);
                break;
            }
        }
    }
}

int main() {
    int batasData, end;

    printf("Input basis data: ");
    scanf("%d", &batasData);
    printf("Enter the end of the range: ");
    scanf("%d", &end);

    display_multiples_of_3(batasData, end);

    return 0;
}