#include <stdio.h>
#include <math.h>


int main() {
    int n;
    int s;
    double result = 0;

    printf("Enter the number of iterations for the Reimann zeta function:");
    scanf("%d", &n);

    printf("\nEnter the input for the Reimann zeta function:");
    scanf("%d", &s);

    for(int c = 1; c <= n; c++){
        result += pow((double)c,(double)-s );
    }

    printf("Result: %lf", result);
}
