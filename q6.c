#include <stdio.h>

int main() {
    const float convert = 1.08;
    float euros[10];
    float dollars[10];

    for(int c = 0; c < 10; c++){
        printf("\nEnter number of Euros [%d]:", c+1);
        scanf("%f", &euros[c]);
        dollars[c] = euros[c] * convert;
        printf("Dollar Amount: $%0.2f\n", dollars[c]);

    }
}
