#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int k, x = 2;
    scanf("%d", &k);
    if (k > 1) 
    {
        while (k > 1) {
                while (k % x == 0)
                {
                    printf("%d ", x);
                    k = k / x;
                    if (k > 1)
                    {
                        printf("x ");
                    }
                }
                x++;
        }
    }
    else 
    {
        printf("Error, %d is can't factor.",k);
    }
    return 0;
}

