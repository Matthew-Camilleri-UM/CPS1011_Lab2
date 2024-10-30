#include <stdio.h>

int main() {
    int n;
    long result = 1;

    printf("Enter the integer you would like the factorial of:");
    scanf("%d", &n);

    for(int c = 1; c <= n; c++){
        result = result * c;
    }

    printf("The factorial of %d is %lld", n, result);
}
