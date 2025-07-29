//welcome to c language
#include <stdio.h>

int main() {
    int a, b, sum;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    sum = a + b;

    printf("Hello, World!\n");
    printf("The sum of %d and %d is %d\n", a, b, sum);

    return 0;
}
