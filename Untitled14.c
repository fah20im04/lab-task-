#include <stdio.h>

int main() {
    int S, T;
    scanf("%d %d", &S, &T);

    int count = 0;
    for (int a = 0; a <= S; a++) {
        for (int b = 0; b <= S - a; b++) {
            for (int c = 0; c <= S - a - b; c++) {
                if (a * b * c <= T) {
                    count++;
                }
            }
        }
    }

    printf("%d\n",count);
    return 0;
}
